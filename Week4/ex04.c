#include <stdio.h>

int main()
{
    char name[30];
    float cal, phy, sci;
    float avg;
    char result;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your Calculus score: ");
    scanf("%f", &cal);

    printf("Enter your Physic score: ");
    scanf("%f", &phy);

    printf("Enter your Science score: ");
    scanf("%f", &sci);

    avg = (cal + phy + sci) / 3;

    if (avg >= 80)
        result='A';
    else if (avg >= 70)
        result='B';
    else if (avg >= 60)
        result='C';
    else if (avg >= 50)
        result='D';
    else
        result='F';

    printf("%s, your average is %.2f. You got grade %c", name, avg,result);


    return 0;
}