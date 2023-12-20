/*To print the position of occourance of an element in the array and delete the dublicate*/
#include<stdio.h>
int main()
{
    int a[30],i,j,k,c=0,n,l,m;
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
                n--;
                for(l=k;l<=n-1;l++)
                {
                    a[l]=a[l+1];
                }
            }
        }
    }
    for(m=0;m<n;m++)
    {
        printf("the %d element is %d\n",m+1,a[m]);
    }

    return 0;
}