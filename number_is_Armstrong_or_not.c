#include<stdio.h>
int main()
{
    int num, sum = 0, temp, remainder;
    printf("enter a number");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        remainder = temp % 10;
        sum = sum + remainder * remainder * remainder;
        temp = temp / 10;
    }
    if (num == sum)
    {
        printf("number is armstrong");
    }
    else
    {
        printf("number is not armstrong");
    }
    return 0;
}