#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int number1,number2;
    printf("Enter two numbers: ");
    scanf("%d %d",&number1,&number2);
    printf("Sum of %d and %d is %d\n",number1,number2,add(number1,number2));
}