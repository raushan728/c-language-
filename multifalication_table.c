#include <stdio.h>

int main() {
    int n,i;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=15;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }

}