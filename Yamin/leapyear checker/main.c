#include <stdio.h>
#include <stdlib.h>

main()
{
    int year;
    printf("Enter the year(four digit):");
    scanf("%d",&year);
    if (year%400==0||(year%100!=0 && year%4==0))
        printf("%d year is a leap year.", year);
    else
        printf("%d year is not a leap year.", year);
    return 0;
}
