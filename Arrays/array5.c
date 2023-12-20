/*To delete an element in the array */
#include<stdio.h>
int main()
{
    int a[30],i,j,k,r,n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element :",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the positon from where the number is to be deleted :");
    scanf("%d",&r);
    // Taking each element one space behind in the array 
    for(j=r-1;j<n-1;j++)
    {
        a[j]=a[j+1];
    }
    n--;
    // Printing the modified array
    for(k=0;k<n;k++)
    {
        printf("The %d element is : %d\n",k+1,a[k]);
    }
    return 0;
}