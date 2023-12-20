/*To input  name and print the ascii codes*/
#include<stdio.h>
int main()
{
    char a[30];
    printf("Enter the name ");
    //scanf("%s",a );
    fgets(a,30,stdin);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ' && a[i]!='\n')
        {
            printf("%d ",a[i]);
        }
        else
        {
            printf("* ");
        }
    }
    return 0;
}