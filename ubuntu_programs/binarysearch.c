/*Binary search*/
#include<stdio.h>
void binarySearch(int a[],int n,int key)
{
    int middle,first,last;
    first=0;
    last=n-1;
    while(first<=last)
    {
        middle=(first+last)/2;
        if(key==a[middle])
        {
            printf("The key is found at position %d\n",middle+1);
            break;
        }
        else if(key>a[middle])
        {
            first=middle+1;
        }
        else //(key<a[middle])
        {
            last=middle;
        }
    }
}
void main()
{
    int a[30],n,key;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the [%d] element :",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched :");
    scanf("%d",&key);
    binarySearch(a,n,key);
}