///////////////////////////////////////////////////////////////
//
//  Function Name : FindGreater
//  Input         : Integer, Integer
//  Output        : string
//  Description   : Find greater number between two numbers
//  Date          : 25/10/2026
//  Author        : Mrunal Nilkanth Deshmukh
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is Greater\n", iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is Greater\n", iSecond);
    }
    else
    {
        printf("Both Number are Equal\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    

    printf("Enter two number : ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}