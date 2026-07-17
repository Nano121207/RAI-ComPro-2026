#include <stdio.h>

int main() {
    float p=4.0;
    float d=3.5;
    float me=3.5;
    float m=3.0;

    float gps=(p+d+me+m)/4.0;

    printf("Progranning  : A\n");
    printf("Drawing      : B+\n");
    printf("Mechanics    : B+\n");
    printf("Math         : B\n");
    printf("GPS          : %.2f\n",gps);

    return 0;
}