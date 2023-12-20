/*Storing sum of two one dimentional array in a third one*/
#include<stdio.h>
int main()
{
    int a[30],b[30],c[30],n;
    printf("Enter the size of the array ");
    scanf("%d",&n);
    printf("Enter the elements in the first array\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the [%d] element ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the elements in the second array\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the [%d] element ",i+1);
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("The c[%d] element is : %d\n",i+1,c[i]=a[i]+b[i]);
    }
    return 0;
}