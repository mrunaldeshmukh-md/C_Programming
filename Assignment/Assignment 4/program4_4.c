///////////////////////////////////////////////////////////////
//
//  Function Name : CheckVotingEligibility
//  Input         : Integer
//  Output        : string
//  Description   : Check Voting Eligibility base on Age
//  Date          : 25/10/2026
//  Author        : Mrunal Nilkanth Deshmukh
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invaslid Age\n");
    }
    else if(iAge >= 18)
    {
        printf("Eligibal for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting");
    }
}
int main()
{
    int iAge = 0;
    
    printf("Enter you Age : ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}