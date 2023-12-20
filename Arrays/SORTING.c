/*Bubble sorting */
#include<stdio.h>
int main()
{
    int n,a[30];
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the [%d] element : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The elements in the un sorted array is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    for (int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("The sorted array is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}