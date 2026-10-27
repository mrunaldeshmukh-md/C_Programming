///////////////////////////////////////////////////////////////
//
//  Function Name : FindGreatest
//  Input         : Integer
//  Output        : string
//  Description   : Find the Greatest number
//  Date          : 25/10/2026
//  Author        : Mrunal Nilkanth Deshmukh
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if(iFirst > iSecond)
    {
        printf("%d is Greater\n", iFirst);
    }
    else if(iSecond > iThird)
    {
        printf("%d is Greater\n", iSecond);
    }
    else
    {
        printf("%d is Greater\n", iThird);
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    
    printf("Enter three number : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}