/*To delete the dublicate elements in the array */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[30],n,position;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the [%d] element : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The elements stored in the array is ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    position=j;
                    n--;
                }
            }
            for(int k=position;k<n;k++)
            {
                a[j]=a[j+1];
            }
        }
    }
    printf("The new array is :");
    for(int l=0;l<n;l++)
    {
        printf("%d ",a[l]);
    }
    return 0;
}