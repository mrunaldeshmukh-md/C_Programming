///////////////////////////////////////////////////////////////
//
//  Function Name : Display Convert
//  Input         : Character
//  Output        : Character
//  Description   : Convert case of a character
//  Date          : 25/10/2026
//  Author        : Mrunal Nilkanth Deshmukh
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c\n",cValue -32);
    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c\n",cValue +32);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);
    
    return 0;
}