#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int j=0;
    ptr=(int *)calloc(5,sizeof(int));
    for(int i=0;i<10;i++)
    {
        if (i%2!=0)
        {
            ptr[j]=i;
            j++;
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",ptr[i]);
    }
    int k=0;
    ptr=realloc(ptr,6);
    for(int i=0;i<13;i++)
    {
        if (i%2==0)
        {
            ptr[k]=i;
            k++;
        }
    }
    printf("\n");
    for(int i=0;i<6;i++)
    {
        printf("%d\t",ptr[i]);
    }
    return 0;
}