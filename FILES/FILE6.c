#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("SUM.txt","r");
    
        int a,b;
        fscanf(fptr,"%d\n",&a);
        fscanf(fptr,"%d\n",&b);
    
    fclose(fptr);

    fptr=fopen("SUM.txt","w");

        fprintf(fptr,"%d\n",a+b);

    fclose(fptr);

}