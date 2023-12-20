#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Train{
    int Trainid;
    char Trainname[20];
    int FromStationcode;
    int ToStationcode;
}T;
int main(){
    T train1,train2;
    printf("Enter the ID of the first train : ");
    scanf("%d",&train1.Trainid);getchar();
    printf("Enter the train name : ");
    fgets(train1.Trainname,20,stdin);
    train1.Trainname[strcspn(train1.Trainname,"\n")]=0;
    printf("Enter the code of the leaving station : ");
    scanf("%d",&train1.FromStationcode);getchar();
    printf("Enter the code of the destination station : ");
    scanf("%d",&train1.ToStationcode);getchar();


    printf("The Train Id : %d\n",train1.Trainid);
    printf("The Train name is : %s\n",train1.Trainname);
    printf("The code of arrival station is : %d\n",train1.FromStationcode);
    printf("The code of the destination station is : %d\n",train1.ToStationcode);

    return 0;
}