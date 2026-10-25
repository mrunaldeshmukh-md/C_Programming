///////////////////////////////////////////////////////////////
//
//  Function Name : CheckVowel
//  Input         : Character
//  Output        : Boolean
//  Description   : Check whether character is vowel or not
//  Date          : 25/10/2026
//  Author        : Mrunal Nilkanth Deshmukh
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

bool CheckVowel(char ch)
{
    if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}