#include <stdio.h>
#include <stdlib.h>

main()
{
    float num;
    int choice;
    printf("1:Foot to meter. 2:Meter to foot.\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    if (choice==1)
    {
        printf("Enter the foot value:");
        scanf("%f", &num);
        printf("Meter: %f\n", num/3.28);
    }
    else
    {
        printf("Enter the feet value:");
        scanf("%f", &num);
        printf("Feet: %f\n", num*3.28);
    }
    return 0;
}
