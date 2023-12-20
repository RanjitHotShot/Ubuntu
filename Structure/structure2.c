#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
    int rollno;
    char name[10];
    int marks;
};
void accept(struct student list[],int s);
void display(struct student list[],int s);
void sort(struct student list[],int s);
int main(){
    struct student data[20];
    int n;
    printf("Enter the number of records you want to enter :");
    scanf("%d",&n);getchar();
    accept(data,n);

    /*Before sorting*/
    printf("The data entered is :\n");
    display(data,n);

    sort(data,n);
    printf("After soting :\n");
    display(data,n);

    return 0;
}
void accept(struct student list[],int s){
    for(int i=0;i<s;i++){
        printf("Enter the name of the student : ");
        fgets(list[i].name,10,stdin);
        list[i].name[strcspn(list[i].name,"\n")]=0;
        printf("Enter the roll number of the student :");
        scanf("%d",&list[i].rollno);getchar();
        printf("Enter the marks of the student : ");
        scanf("%d",&list[i].marks);getchar();
    }
}
void display(struct student list[],int s){
    for(int i=0;i<s;i++){
        printf("Name : %s\n",list[i].name);
        printf("Roll no : %d\n",list[i].rollno);
        printf("Marks : %d\n",list[i].marks);
    }
}
void sort(struct student list[],int s){
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            if(list[i].marks<list[j].marks){
                struct student temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }
}