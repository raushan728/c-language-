#include<stdint.h>
int main()
{
    int a, b, c;
    printf("enter any number\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("a is big");
    }
    else if (b > a && b > c)
    {
        printf("b is big");
    }
    else if (c > a && c > b)
    {
        printf("c is big");
    }
    else
    {
        printf("all are equal");
    }
    
}