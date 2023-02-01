#include<stdio.h>
int main()
{
    char sex, ms;
    int age;
    printf("Enter age sex marital status : ");
    scanf("%d%c%c",&age, &sex, &ms);
    if((ms=='m')||(ms=='u' && sex=='m' && age>30)||(ms=='u' && sex=='f' && age>25))
        printf("Driver should be insured");
    else
        printf("Driver should not be insured");

    return 0;
}