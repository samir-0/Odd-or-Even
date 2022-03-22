#include<stdio.h>
int main(void)
{
    int number;

    printf("Enter a number :");
    scanf("%d",&number);
    if ( number % 2 == 0)
    {
        printf("It`s Even Number \n");
    }
    else
    {
        printf("It`s Odd Number \n");
    }
    return 0;
}
