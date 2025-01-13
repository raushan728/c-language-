#include<stdio.h>
int main()
{
    int number,reverseNumber=0,remainder,temp;
    printf("Enter a number: ");
    scanf("%d",&number);
    temp=number;
    while(temp!=0)
    {
        remainder=temp%10;
        reverseNumber=reverseNumber*10+remainder;
        temp/=10;
    }
    if(number==reverseNumber)
    {
        printf("Number is palindrome\n");
    }
    else
    {
        printf("Number is not palindrome\n");
    }
    return 0;
}