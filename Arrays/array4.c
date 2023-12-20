/*Inserting an element in the array*/
#include<stdio.h>
int main()
{
    int a[30],n,k,i,j,p,e;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element :",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the position in which element is to be inserted :");
    scanf("%d",&p);
    printf("Enter the element to be inserted :");
    scanf("%d",&e);
    n++;
    for(j=n-1;j>=p-1;j--)
    {
        a[j+1]=a[j];
    }
    a[p-1]=e;
    for(k=0;k<n;k++)
    {
        printf("The %d element is : %d\n",k+1,a[k]);
    }
    return 0;
}