#include<stdio.h>
struct student{
    int RNo;
    char Name[20];
    char Sec[5];
    float CGPA;
    char PNo[10];
};

int main(){
    int n,i=0;
    printf("Enter the Number of Students:");
    scanf("%d",&n);

    struct student s1[n];

    for(i=0;i<n;i++){
    printf("Enter the Register Number:");
    scanf("%d", &s1[i].RNo);
    printf("Enter the Student Name:");
    scanf("%s", &s1[i].Name);
    printf("Enter the Section:");
    scanf("%s", &s1[i].Sec);
    printf("Enter the CGPA:");
    scanf("%f", &s1[i].CGPA);
    printf("Enter the Phone Number:");
    scanf("%s", &s1[i].PNo);
    }

    for(i=0;i<n;i++){
    printf("\tSTUDENT DETAILS\nRegister No:%d\nStudent Name:%s\nSection:%s\nCGPA:%.2f\nPhone Number:%s\n",s1[i].RNo,s1[i].Name,s1[i].Sec,s1[i].CGPA,s1[i].PNo);
    }
    return 0;
}