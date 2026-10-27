///////////////////////////////////////////////////////////////
//
//  Function Name : CheckMultipleDivisibility
//  Input         : Integer
//  Output        : string
//  Description   : Check whether it is divisible by both 3 and 5, only 3, only 5, or neither
//  Date          : 27/10/2026
//  Author        : Mrunal Nilkanth Deshmukh
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if(iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("Divisible by both");
    }
    else if(iValue % 3 == 0)
    {
        printf("Divisible by 3 only");
    }
    else if(iValue % 5 == 0)
    {
        printf("Divisible by 5 only");
    }
    else
    {
        printf("Not Divisible by Either");
    }

}
int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}