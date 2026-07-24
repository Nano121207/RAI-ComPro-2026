#include <stdio.h>

int main()
{
    float h, r;
    float volume;
    float pi = 3.14;

    printf("Enter cone hight: ");
    scanf("%f", &h);

    printf("Enter cone base radius: ");
    scanf("%f", &r);

    volume = (pi * r * r * h)/3;

    printf("Cone volume = %.1f\n", volume);

    if (volume > 260)
    {
        printf("This cone is perfect for Supun project");
    }
    else
    {
        printf("This cone is not fit for this project");
    }

    return 0;
}