#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter the year(four digit):");
    scanf("%d", &year);
    if (year%400==0||(year%100!=0 && year%4==0))
    printf("The year is a leap year.");

    else
    printf("The year is not a leap year.");

    return 0;
}
