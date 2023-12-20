/*To print the reverse of the array in other array */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[30],b[30],n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element :",i+1);
        scanf("%d",&a[i]);
    }
    int j=0;
    for(int i=n-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    printf("The other array elements is :\n");
    for(int i=0;i<n;i++)
    {
        printf("The %d element is : %d\n",i+1,b[i]);
    }
    return 0;
}