#include<stdio.h>
struct Student{
    int rollNo;
    char name[50];
    float marks;
};
int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    struct Student s[n];
    for(int i=0;i<n;i++){
        printf("\nStudent %d\n",i+1);
        printf("Enter Roll Number: ");
        scanf("%d",&s[i].rollNo);
        printf("Enter Name: ");
        scanf("%s",s[i].name);
        printf("Enter Marks: ");
        scanf("%f",&s[i].marks);
    }
    printf("Student Records\n");
    for(int i=0;i<n;i++){
        printf("Roll No: %d\n",s[i].rollNo);
        printf("Name: %s\n",s[i].name);
        printf("Marks: %.2f\n",s[i].marks);
    }
    return 0;
}