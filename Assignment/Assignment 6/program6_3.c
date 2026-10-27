///////////////////////////////////////////////////////////////
//
//  Function Name : CalculateDiscount
//  Input         : Integer
//  Output        : String
//  Description   : Clculate the final payable amount after applying a discount based on the purchase amount
//  Date          : 27/10/2026
//  Author        : Mrunal Nilkanth Deshmukh
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    fFinalAmount = fAmount - fDiscount;
    printf("Payable Amount : %.2f", fFinalAmount);

    if(fAmount < 0)
    {
        printf("Invalid Amount");
    }
    else if(fAmount < 1000)
    {
        fDiscount = 0;
    }
    else if(fAmount < 5000 )
    {
        fDiscount =  fAmount * 0.10;
    }
    else
    {
        fDiscount =  fAmount * 0.20;
    }

}
int main()
{
    float fAmount = 0.0f;
    int iAge = 0;

    printf("Enter purchase amount : ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}