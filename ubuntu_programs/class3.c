/*To chect whether the absolute difference between consecutive elemets is striclty decreasing or not*/
#include<stdio.h>
#include<stdlib.h>
int ABSOLUTEDIFF(int a[],int m);
int main()
{
    int arr[10],m;
    printf("Enter the size ");
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        printf("Enter the [%d] element ",i+1);
        scanf("%d",&arr[i]);
    }
    int u=ABSOLUTEDIFF(arr,m);
    if(u==1){
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }
}
int ABSOLUTEDIFF(int a[],int m)
{
    int flag=0;
    int val;
    if((a[0]-a[1])>0)
    {
        val=a[0]-a[1];
    }
    else
    {
        val=a[1]-a[0];
    }
    for(int i=1;i<m;i++)
    {
        if(val<=(a[i]-a[i+1]))
        {
            flag=0;
            break;   
        }
        else
        {
            flag=1;
        }
    }
    return flag;
}