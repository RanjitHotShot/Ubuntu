/*Armastrong number or not */
#include<stdio.h>
#include<math.h>
void armstrong(int a)
{
    int r,r1,count=0,sum=0;
    int b=a;
    int c=b;
    while(a!=0)
    {
        r=a%10;
        printf("%d\n",r);
        a/=10;
        count++;
    } 
    printf("THE COUNT IS` %d\n",count);
    while(b!=0)
    {
        r1=b%10;
        printf("%d\n",r1);
        sum+=pow(r1,count);
        printf(" THE SUM IS %d\n",sum);
        b/=10;
    }
    if(sum==c)
    {
        printf("ARMSTRONG NUMBER ");
    }
    else
    {
        printf("NOT ARMSTRONG NUMBER");
    }
}
void main()
{
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    armstrong(a);
}