/*To enter 10 numbers in an array and print it */
#include<stdio.h>
int main()
{
    int a[30],b[30],l,k,i,j,n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element :",i+1);
        scanf("%d",&a[i]);
    }
    l=0;
    for(j=n;j>0;j--)
    {
        b[l]=a[j-1];
        l++;
    }
    for(k=0;k<n;k++)
    {
        printf("The %d element in other array is : %d\n",k+1,b[k]);
    }
    return 0;
}