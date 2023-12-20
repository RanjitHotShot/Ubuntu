#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("TEST.txt","r");
    int chara;
    while (fscanf(fptr, "%d", &chara) != EOF) 
    {
        printf("%d\t", chara);
    }
    fclose(fptr);
    return 0;
}