#include<stdio.h>

main ()
{
    float a,b,c;
    printf("Enter the value of Side A:");
    scanf("%f", &a);
    printf("Enter the value of Side B:");
    scanf("%f", &b);
    printf("Enter the value of Side C:");
    scanf("%f", &c);

    ((a||b||c)!=0&&(a+b)>c &&(b+c)>c&&(c+a)>b) ? printf("It is a triangle") : printf("It is not a triangle");
    return 0;
}
