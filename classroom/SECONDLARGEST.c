/* To input number in the array and print the second largest number  */
#include<stdio.h>
void largests(int a[],int n)
{
    int j,largest,seclargest;
     if(a[0]>a[1])
    {
        largest=a[0];
        seclargest=a[1];
    }
    else
    {
        largest=a[1];
        seclargest=a[0];
    }
    for(j=0;j<n;j++)
    {
        if(largest<a[j] && largest!=a[j])
        {
            seclargest=largest;
            largest=a[j];
        }
        else if(seclargest<a[j])
        {
            seclargest=a[j];
        }
    }
    printf("The largest element in the array is : %d \n",largest);
    printf("The second largest element in the array is : %d ",seclargest);
}
void main()
{
    int a[20],n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the [%d] element :",i+1);
        scanf("%d",&a[i]);
    }
    largests(a,n);
}