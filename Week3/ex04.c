#include <stdio.h>
int main()
{
    char name[50];
    int id;
    float PGS;
    float PSS;
    float CCS;

    printf("Enter your Name: ");
    scanf("%s",name);
    printf("Enter your student ID: ");
    scanf("%d",&id);
    printf("Enter your Programming score: ");
    scanf("%f",&PGS);
    printf("Enter your Physics score: ");
    scanf("%f",&PSS);
    printf("Enter your Calculus score: ");
    scanf("%f",&CCS);

    float GPA=(PGS+PSS+CCS)/3;
    printf("Hi M(%d)! Your GPA is %.2f\n",id,GPA);

    return 0;
}