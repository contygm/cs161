/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         11/14/2018
** Description:  Sort 3 given numbers from lowest to highest.          
*******************************************************************************/ 

/********************************************************************* 
** Description: extracted swap method to avoid redundancy
*********************************************************************/
void swap(int* num1, int* num2)
{
    int* temp; 
    *temp = *num2;
    *num2 = *num1;
    *num1 = *temp;
}

/********************************************************************* 
** Description: Sort 3 given numbers from lowest to highest. 
*********************************************************************/
void smallSort2(int* num1, int* num2, int* num3)
{
    // check if numbers are in proper order already
    while ( (*num2 < *num1) || (*num3 < *num2) || (*num3 < *num1))
    {
        // swap if numbers are out of order
        if (*num2 < *num1) 
            swap(num2, num1);
        else if (*num3 < *num2)
            swap(num3, num2);
        else if (*num3 < *num1)
            swap(num3, num1);
    }
}