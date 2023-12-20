/*Merging of two sorted arrays */
#include<stdio.h>
int main()
{
    int c[60],a[30],b[30],m,n,j,i,o,k=0;
    printf("Enter the size of the first array :");
    scanf("%d",&m);
    printf("Enter the size fo the second array :");
    scanf("%d",&n);
    printf("Enter the elements in the first array :\n");
    for( i=0;i<m;i++)
    {
        printf("Enter the [%d] element ",i+1);
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    k=i;
    printf("Enter the elements in the second array :\n");
    for(int h=0;h<n;h++)
    {
        printf("Enter the [%d] element ",h+1);
        scanf("%d",&b[h]);
        c[k]=b[h];
        k++;
    }
    printf("The merged array is :\n");
    for(int l=0;l<k;l++)
    {
        printf("%d ",c[l]);
    }
    return 0;
}