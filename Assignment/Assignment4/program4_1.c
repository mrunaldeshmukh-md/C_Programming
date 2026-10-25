///////////////////////////////////////////////////////////////
//
//  Function Name : CheckNumber
//  Input         : Interge
//  Output        : string
//  Description   : Check whether number is positive, negative or zero
//  Date          : 25/10/2026
//  Author        : Mrunal Nilkanth Deshmukh
//
///////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iValue)
{
     if(iValue > 0)
     {
        printf("Positive Number");
     }
     else if(iValue < 0)
     {
        printf("Negative Number");
     }
     else
     {
        printf("Zero");
     }
}
int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}