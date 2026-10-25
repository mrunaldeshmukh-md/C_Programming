///////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactors
//  Input         : Interge
//  Output        : Integer
//  Description   : Display Factor of a numbers
//  Date          : 25/10/2026
//  Author        : Mrunal Nilkanth Deshmukh
//
///////////////////////////////////////////////////////////////
#include <stdio.h>

void DisplayFactors(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i) == 0)
        {
            printf("%d",i);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}