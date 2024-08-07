#include<stdio.h>

struct Student{
    int R_No;
    float CGPA;
    char Name[10];
    char Sec[3];
};

int main(){
    int i,n;
    printf("Enter the Number of Students:");
    scanf("%d",&n);
    struct Student s1[n];
    struct Student *ptr[n];
    //ptr=&s1;
    for(i=0;i<n;i++){
    ptr[i]=&s1[i];
    printf("Enter the Student Reg No:");
    scanf("%d",&ptr[i]->R_No);
    printf("Enter the Student Name:");
    scanf("%s",ptr[i]->Name);
    printf("Enter the Student Section:");
    scanf("%s",ptr[i]->Sec);
    printf("Enter the CGPA:");
    scanf("%f",&ptr[i]->CGPA);
    };
    for(i=0;i<n;i++){
    printf("\n\tSTUDENT DETAILS:\n");
    printf("Name:%s\nReg No:%d\nSection:%s\nCGPA:%.2f",ptr[i]->Name,ptr[i]->R_No,ptr[i]->Sec,ptr[i]->CGPA);
    };
    return 0;
};