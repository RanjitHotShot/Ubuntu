/*Binary search*/
#include<stdio.h>
int main()
{
    int n,a[30],key;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the [%d] element : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The elements in the array is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    int first=0;
    int last=n-1;
    printf("Enter the number to be searched : ");
    scanf("%d",&key);
    while(first<=last)// for(int i=first;i<last;i++)
    {
        int middle=(first+last)/2;
        if(key==a[middle])
        {
            printf("The element is found at positon : %d",middle+1);
            break;
        }
        else if(key>a[middle])
        {
            first=middle+1;
        }
        else//key<middle
        {
            last=middle;
        }
    }
    return 0;
}