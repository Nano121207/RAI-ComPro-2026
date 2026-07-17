#include <stdio.h>
int main()
{
    char firstname[50];
    char lastname[50];
    int age;
    float height;
    char u_name[50];

    printf("Enter your full name: ");
    scanf("%s %s",firstname,lastname);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f",&height);
    printf("Enter you University name: ");
    scanf(" %[^\n]",u_name);

    printf("Hi! Everyone. This is %c.%s from %s. I am %d years old and my height is %.1f cm tall.",lastname[0],firstname,u_name,age,height);

    return 0;
}