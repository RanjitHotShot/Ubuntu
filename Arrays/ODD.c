/*To calculate the odd numbers in an array and find their sum  */
#include<stdio.h>
int main()
{
    int n,a[30],c=0;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the [%d] element ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            c++;
            printf("%d ",a[i]);
        }
        else
        {
             continue;
        }
    }
    printf("The number of odd integers = %d",c);
    return 0;
}