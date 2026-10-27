///////////////////////////////////////////////////////////////
//
//  Function Name : CalculateBill
//  Input         : Integer
//  Output        : Integer
//  Description   : Clculate electricity bill based on units consumed using slab-wise rate
//  Date          : 27/10/2026
//  Author        : Mrunal Nilkanth Deshmukh
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CalculateBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits < 0)
    {
        printf("Invalide Units");
    }
    else if(iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("Bill : %.2f", fBill);
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits - 100) * 7);
        printf("Bill : %.2f", fBill);

    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
        printf("Bill : %.2f", fBill);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter units : ");
    scanf("%d", &iValue);

    CalculateBill(iValue);

    return EXIT_SUCCESS;
}