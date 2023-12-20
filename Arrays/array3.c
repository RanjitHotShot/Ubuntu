/*To print the maximum and minimum value in the array*/
#include<stdio.h>
int main()
{
    int i,j,a[100],n;
    printf("Enter the size of array a :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element :",i+1);
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[1];
    for(j=0;j<n;j++)
    {
        if(a[j]>max)
        {
            max=a[j];
        }
        if(a[j]<min)
        {
            min=a[j];
        }
    }
    printf("The maximum value in the array is %d",max);
    printf("\nThe minimum value in the array is %d",min);
    return 0;
}