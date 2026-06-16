#include<stdio.h>
int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    int roll[n];
    float marks[n];
    char name[n][50];
    for(int i=0;i<n;i++){
        printf("\nStudent %d\n",i+1);
        printf("Enter Roll No: ");
        scanf("%d",&roll[i]);
        printf("Enter Name: ");
        scanf("%s",name[i]);
        printf("Enter Marks: ");
        scanf("%f",&marks[i]);
    }
    printf("Student Records \n");
    for(int i=0;i<n;i++){
        printf("\nRoll No: %d\n",roll[i]);
        printf("Name: %s\n",name[i]);
        printf("Marks: %.2f\n",marks[i]);
    }
    return 0;
}