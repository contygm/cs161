/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         10/17/2018
** Description:  Takes the starting positive integer, performs hailstone sequence 
**               on integer. Returns number of steps required to get to 1. 
*******************************************************************************/ 

int hailstone(int num)
{
    int stepCount = 0;
    
    while (num != 1)
    {
        if (num % 2 == 0)
            num /= 2; 
        else 
            num = num*3 + 1;

        stepCount++;
    }
    
    return stepCount;
}