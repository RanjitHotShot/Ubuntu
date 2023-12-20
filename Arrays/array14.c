/*Second smallest in the array*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,a[30],n,j,smallest,secondsmallest;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element :",i+1);
        scanf("%d",&a[i]);
    }
    if(a[0]>a[1])
    {
        smallest=a[1];
        secondsmallest=a[0];
    }
    else
    {
        smallest=a[0];
        secondsmallest=a[1];
    }
    for(j=0;j<n;j++)
    {
    if(smallest>a[j])
        {
            secondsmallest=smallest;
            smallest=a[j];
        }
        else if(secondsmallest>a[j])
        {
            secondsmallest=a[j];
        }
    }
    printf("The smallest number is :%d\n",smallest);
    printf("The second smallest is :%d",secondsmallest);
    return 0;
}