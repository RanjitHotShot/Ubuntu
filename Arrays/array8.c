/*Second largest in the array */
#include<stdio.h>
int main()
{
    int a[30],i,j,k,e,l,p,largest,secondlar,n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element ",i+1);
        scanf("%d",&a[i]);
    }
    if(a[0]>a[1])
    {
        largest=a[0];
        secondlar=a[1];
    }
    else
    {
        largest=a[1];
        secondlar=a[0];
    }
    for(j=0;j<n;j++)
    {
        if(largest<a[j])
        {
            secondlar=largest;
            largest=a[j];
        }
        else if(secondlar<a[j])
        {
            secondlar=a[j];
        }
    }
    printf("The largest number in the array is : %d\n ",largest);
    printf("The second largest number in the array is %d ",secondlar);
    return 0;
}