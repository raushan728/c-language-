#include<stdint.h>
int main()
{
    int year;
    printf("enter year\n");
    scanf("%d", &year);
    year % 4 == 0 ? printf("leap year") : printf("not a leap year");
}