#include<stdio.h>
struct Student{
    char name[50];
    int rollNo;
    float m1,m2,m3,m4,m5;
};
int main(){
    struct Student s;
    printf("Enter Name: ");
    scanf("%s",s.name);
    printf("Enter Roll Number: ");
    scanf("%d",&s.rollNo);
    printf("Enter Marks of 5 Subjects:\n");
    scanf("%f %f %f %f %f",&s.m1,&s.m2,&s.m3,&s.m4,&s.m5);
    float total=s.m1+s.m2+s.m3+s.m4+s.m5;
    float percentage=total/5;
    printf("MARKSHEET\n");
    printf("Name: %s\n",s.name);
    printf("Roll No: %d\n",s.rollNo);
    printf("Total Marks: %.2f\n",total);
    printf("Percentage: %.2f%%\n",percentage);
    if(percentage>=90)
        printf("Grade: A+\n");
    else if(percentage>=75)
        printf("Grade: A\n");
    else if(percentage>=60)
        printf("Grade: B\n");
    else if(percentage>=40)
        printf("Grade: C\n");
    else
        printf("Grade: Fail\n");
    return 0;
}