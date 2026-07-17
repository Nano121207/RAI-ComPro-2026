#include<stdio.h>
int main()
{
int min;
int hr;
int remain;
printf("Enter total minutes: ");
scanf("%d",&min);
hr = min/60;
remain = min%60;
printf("%d minutes is %d hour(s) and %d minute(s)\n",min,hr,remain);
return 0;
}