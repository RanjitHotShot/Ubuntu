#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Book{
    char bname[20];
    int pages;
    char author[20];
    float price;
};
int main(){
    int n;
    printf("Enter the number os books whose info is to be entered :");
    scanf("%d",&n);
        struct Book B[n];
    for(int i=0;i<n;i++){
        printf("Enter the book name :");
        fgets(B[i].bname,20,stdin);
        B[i].bname[strcspn(B[i].bname,"\n")]=0;
        printf("Enter the number of pages : ");
        scanf("%d",&B[i].pages);getchar();
        printf("Enter the name of the author ");
        fgets(B[i].author,20,stdin);
        B[i].author[strcspn(B[i].author,"\n")]=0;
        printf("Enter the price :");
        scanf("%f",&B[i].price);getchar();
    }
    for(int i=0;i<3;i++){
        printf("The name of the book is : %s\n",B[i].bname);
        printf("The number of pages in the book is : %d\n",B[i].pages);
        printf("The name of the author : %s\n",B[i].author);
        printf("The price of the book is : %f\n",B[i].price);
    }
    return 0;
} 