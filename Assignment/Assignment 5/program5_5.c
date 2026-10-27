///////////////////////////////////////////////////////////////
//
//  Function Name : CheckCharacterType
//  Input         : Character
//  Output        : string
//  Description   : Check whether the character is uppercase, lowercase, digit, or special character
//  Date          : 27/10/2026
//  Author        : Mrunal Nilkanth Deshmukh
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase Alphabet"); 
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase Alphabet");
    }
    else if((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digit");
    }
    else
    {
         printf("Special Character");
    }

}
int main()
{
    char cValue = '\0';
    
    printf("Enter a character : ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}