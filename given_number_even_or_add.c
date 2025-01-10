#include<stdint.h>
int main(){
    int number;
    printf("enter any number\n");
    scanf("%d",&number);
    if (number % 2 == 0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }
}