#include<stdio.h>
#include<conio.h>

main()
{
    int x, y;
    char c;
    printf("Enter the vowel:");
    scanf("%c", &c);

    x=(c=='a'||c=='e'||c=='o'||c=='i'||c=='u');
    y=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

    if (x||y)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
