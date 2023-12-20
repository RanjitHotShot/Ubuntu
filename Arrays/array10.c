/*To print the position of occourance of an element in the array*/
#include<stdio.h>
int main()
{
    int a[30],i,j,k,c=0,n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element :",i+1);
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        for(k=j+1;k<n;k++)
        {
            if(a[j]==a[k])
            {
                c++;
                printf("Element %d occured in position no : %d & %d in the array.\n",a[j],j+1,k+1);
            }
        }
    }
    printf("\nThe number of dublicate elements in the array is %d",c);
    return 0;
}