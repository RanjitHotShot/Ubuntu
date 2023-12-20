/*To find the largest and smallest number in the array*/
#include<stdio.h>
void smallest_largest(int a[],int );
void main()
{
    int a[30],n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the [%d] element :");
        scanf("%d",&a[i]);
    } 
    smallest_largest(a,n);
}
void smallest_largest(int a[],int n)
{
    int largest,smallest;
    if(a[0]>a[1])
    {
        largest=a[0];
        smallest=a[1];
    }
    else
    {
        largest=a[1];
        smallest=a[0];
    }
    for(int i=0;i<n;i++)
    {
        if(largest<a[i])
        {
            largest=a[i];
        }
        if(smallest>a[i])
        {
            smallest=a[i];
        }
    }
    printf("The largest element in the array is : %d\n",largest);
    printf("The smallest element in the array is : %d\n",smallest);
}