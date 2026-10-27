///////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Input         : Integer
//  Output        : string
//  Description   : Check whether it is Leap Year or Not
//  Date          : 25/10/2026
//  Author        : Mrunal Nilkanth Deshmukh
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if((iYear % 400 == 0) || (iYear % 4 == 0 && iYear % 100 !=0))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
}
int main()
{
    int iYear = 0;
    
    printf("Enter Year : ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}