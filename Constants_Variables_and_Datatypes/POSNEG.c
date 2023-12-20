/*To printf the number of negative and positive number in the given set*/
#include<stdio.h>
int main()
{
    int n,a,c=0,d=0;
    printf("Enter the numbers and type 0 to exit :");
    do
    {
        scanf("%d",&a);
        if(a<0)
        {
            printf("Negative number %d\n",a);
            c++;
        }
        else
        {
            printf("Positive number %d\n",a);
            d++;
        }
    }
    while(a!=0);
    printf("The number of positive numbers is %d\n",d-1);
    printf("The number of negative numbers is %d",c);
    return 0;
}
