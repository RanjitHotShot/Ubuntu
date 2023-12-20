#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("apple.txt","r");
    char chara;
    for (chara = fgetc(fptr); chara != EOF; chara = fgetc(fptr))
    {
        printf("%c",chara); 
    }
    // OR
    // char character;
    // character=fgetc(fptr);
    // while(character!=EOF)
    // {
    //     printf("%c",character);
    //     character=fgetc(fptr);
    // }
    // printf("\n");
    // fclose(fptr);
    
    
    FILE *fgh;
    fgh=fopen("TT.txt","w");
    char ch;
    printf("Enter the string :");
    scanf("%c",&ch);
    fputc(ch,fgh);
    fclose(fgh);
    
    /*fputc only enter a single  character */
    // FILE *fghj;
    // fghj=fopen("TTT.txt","w");
    // char chh[100];
    // printf("Enter the string :");
    // scanf("%s\n", chh);
    // fputc(chh,fgh);
    // fclose(fghj);
    return 0;
}