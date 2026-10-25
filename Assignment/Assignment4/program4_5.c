///////////////////////////////////////////////////////////////
//
//  Function Name : CheckDivisibility
//  Input         : Integer
//  Output        : string
//  Description   : Check whether it is divisible by 5
//  Date          : 25/10/2026
//  Author        : Mrunal Nilkanth Deshmukh
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{
    if(iValue % 5 == 0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5");
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter a number : ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}