#include<stdio.h>
void factor(int a);
int main()
{
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);
    factor(a);
    printf("Enter the second number b:");
    scanf("%d",&b);
    factor(b);
    return 0;
}
void factor(int a)
{
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("%d\t",i);
        }
    }
    printf("\n");
}