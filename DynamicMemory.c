#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    int n, new_n;
    printf("Enter number of elements :");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("memory Allocation is Failed");
        return 1;
    }
    printf("Enter %d elemets", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter new total size (grater than %d) :", n);
    scanf("%d", &new_n);
    int *temp = realloc(arr, new_n * sizeof(int));
    if (temp==NULL)
    {
        printf("memory Allocation feild");
        free(arr);
        return 1;
    }
    arr =temp;
    printf("enter %d more elements",new_n-n);
    for( int i=n;i<new_n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("final array\n");
    for (size_t i = 0; i <new_n; i++)
    {
        printf("%d, ",arr[i]);
    }
 free(arr);
 return 0;   
}
