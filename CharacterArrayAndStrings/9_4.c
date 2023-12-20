/*To count particular word in the sentence */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[100],key[10],store[10];
    int count=0,flag=0,j=0,k=0;
    printf("Enter the sentence : ");
    fgets(a,100,stdin);
    a[strcspn(a,"\n")]=0;
    printf("Enter the word to be searched in the sentence : ");
    scanf("%s",key);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ' || a[i]=='\n' || a[i+1]=='\0')
        {
            if(a[i+1] == '\0' && a[i] != ' ' && a[i] != '\n')
            {
                store[k]=a[i];
                k++;
            }
            store[k]='\0';
            if(strcmp(store,key)==0)
            {
                count++;
                flag=1;
            }
            k=0;
        }
        else
        {
            store[k]=a[i];
            k++;
        }
    }
    if(flag == 1)
    {
        printf("The word appeared %d times.\n", count);
    }
    else
    {
        printf("The word is not present in the string.\n");
    }
    return 0;
}
    // for(int i=0;a[i]!='\0';i++)
    // {
    //     k=0;
    //     j=i;
    //     while(a[j]!=' ' && a[j]!='\n')
    //     {
    //         store[k]=a[j];
    //         j++;
    //         k++;
    //     }
    //     store[k]='\0';
    //     if(strcmp(key,store)==0)
    //     {
    //         flag=1;
    //         count++;
    //     }
    //     //i=j;
    // }
    // if(flag==1)
    // {
    //     printf("The number of times the character appeared  %d",count);
    // }
    // else
    // {
    //     printf("Character is not present in the string.");
    // }
/**/
    // printf("Enter the character to be searched and counted : ");
    // scanf("%c",&key);
    // for(int i=0;a[i]!='\0';i++)
    // {
    //     if(a[i]==key)
    //     {
    //         flag=1;
    //         count++;
    //     }
    // }
    // if(flag==1)
    // {
    //     printf("The number of times the character appeared  %d",count);
    // }
    // else
    // {
    //     printf("Character is not present in the string.");
    // }