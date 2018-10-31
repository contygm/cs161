/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         10/17/2018
** Description:  Takes the starting positive integer, performs hailstone sequence 
**               on integer. Returns number of steps required to get to 1. 
*******************************************************************************/ 

int hailstone(int num)
{
    // keep track of iterations
    int stepCount = 0;
    
    // check if num ==1 
    while (num != 1)
    {
        // even numbers change
        if (num % 2 == 0)
            num /= 2; 
        // odd numbers change
        else 
            num = num*3 + 1;

        // update count
        stepCount++;
    }
    
    // return count
    return stepCount;
}