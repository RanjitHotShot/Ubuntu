#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    int *ptr;
    ptr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element ",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",ptr[i]);
    }
    free(ptr);
    printf("\n");
    ptr=(int *)calloc(2,sizeof(int));
    for(int i=0;i<2;i++)
    {
        printf("%d\t",ptr[i]);
    }

    return 0;
}