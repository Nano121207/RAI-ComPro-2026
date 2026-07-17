#include <stdio.h>
int main()
{
    int num;
    float f;
    char ch;

    printf("Please enter an integer value: ");
    scanf("%d",&num);
    printf("You entered %d\n",num);
    printf("Please enter a float value: ");
    scanf("%f",&f);
    printf("You entered %.1f\n",f);
    printf("Please enter a character: ");
    scanf(" %c",&ch);
    printf("You entered %c\n",ch);

    return 0;
}