///////////////////////////////////////////////////////////////
//
//  Function Name : CheckAddmission
//  Input         : Integer
//  Output        : String
//  Description   : Check whether a student is eligible for addmission based on marks and age
//  Date          : 27/10/2026
//  Author        : Mrunal Nilkanth Deshmukh
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckAddmission(float fMarks, int iAge)
{
    if(fMarks < 0 || fMarks > 100)
    {
        printf("Invalide Marks");
    }
    else if(iAge < 0)
    {
        printf("invalid Age");
    }
    else if(fMarks >= 60 && iAge >= 17)
    {
        printf("Eligible for Admission");

    }
    else
    {
        printf("Not Eligible for Admission");
    }
}
int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks amd age : ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAddmission(fMarks, iAge);

    return EXIT_SUCCESS;
}