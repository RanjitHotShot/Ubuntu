/*To print asci value in a given range*/
#include<stdio.h>
int main()
{
    int a,z;
    printf("Enter the starting range and ending range between 65-->122 : ");
    scanf("%d",&a);
    printf("Enter the ending range and ending range between 65-->122 : ");
    scanf("%d",&z);
    for(int i=a;i<=z;i++)
    {
        printf("The asci value is %c\n",i);
    }
    return 0;
}