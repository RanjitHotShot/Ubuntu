/*To output series of statements */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[30];
    for(int i=0;i<3;i++)//while(1)
    {
        printf("Who is the inventor of C \n");
        // fgets(a,30,stdin);
        // a[strcspn(a, "\n")] = 0;// removes new line character.
        scanf("%s",a);
        if(strcmp(a,"GOD")==0)
        {
            printf("Good");
            break;
        }
        else
        {
            printf("Try again\n");
        }
    }
    return 0;
}