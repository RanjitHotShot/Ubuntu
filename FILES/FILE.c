#include<stdio.h>
int main()
{
    FILE *fptr;
    FILE *ffptr;
    FILE *fffptr;
    fptr=fopen("T.txt","r");// read "r".write or open "w";
    char ch[100];
    if(fptr==NULL)
    {
        printf("File doesn't exist\n");
    }
    else
    {
        printf("File exists\t");
        fscanf(fptr,"%s",&ch);
        printf("%s\n",ch);
    }
    fclose(fptr);
    ffptr=fopen("TEST.txt","r");// read "r".
    char cch;
    if(ffptr==NULL)
    {
        printf("File doesn't exist\n");
    }
    else
    {
        printf("File exists\n");//  goes character  by character .
        fscanf(ffptr,"%c",&cch);
        printf("The character is = %c\n",cch);//1
        fscanf(ffptr,"%c",&cch);
        printf("The character is = %c\n",cch);//2
        fscanf(ffptr,"%c",&cch);
        printf("The character is = %c\n",cch);//3
        fscanf(ffptr,"%c",&cch);
        printf("The character is = %c\n",cch);//4
        fscanf(ffptr,"%c",&cch);
        printf("The character is = %c\n",cch);//5
        fscanf(ffptr,"%c",&cch);
        printf("The character is = %c\n",cch);//6
        fscanf(ffptr,"%c",&cch);
        printf("The character is = %c\n",cch);//7
        fscanf(ffptr,"%c",&cch);
        printf("The character is = %c\n",cch);//8
        fscanf(ffptr,"%c",&cch);
        printf("The character is = %c\n",cch);//9
        fscanf(ffptr,"%c",&cch);
        printf("The character is = %c\n",cch);//10
        fscanf(ffptr,"%c",&cch);
        printf("The character is = %c\n",cch);//11
        fscanf(ffptr,"%c",&cch);
        printf("The character is = %c\n",cch);//12
        fscanf(ffptr,"%c",&cch);
        printf("The character is = %c\n",cch);//13
    }
    fclose(ffptr);
    fffptr=fopen("TT.txt","r");
    {
        int a;
        if(fffptr==NULL)
        {
            printf("File doesnt exist\n");
        }
        else
        {
            printf("File exists\n");
            fscanf(fffptr,"%d",&a);
            printf("The integer is = %d\n",a);
            fscanf(fffptr,"%d",&a);
            printf("The integer is = %d\n",a);
            fscanf(fffptr,"%d",&a);
            printf("The integer is = %d\n",a);
        }
    }

    return 0;
}