#include<stdio.h>
struct Employee{
    int id;
    char name[50];
    float basicSalary;
};
int main(){
    int n;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    struct Employee emp[n];
    for(int i=0;i<n;i++){
        printf("\nEmployee %d\n",i+1);
        printf("Enter ID: ");
        scanf("%d",&emp[i].id);
        printf("Enter Name: ");
        scanf("%s",emp[i].name);
        printf("Enter Basic Salary: ");
        scanf("%f",&emp[i].basicSalary);
    }
    printf("Salary Report\n");
    for(int i=0;i<n;i++){
        float hra = emp[i].basicSalary * 0.20;
        float da  = emp[i].basicSalary * 0.10;
        float tax = emp[i].basicSalary * 0.05;
        float netSalary =
            emp[i].basicSalary + hra + da - tax;
        printf("\nID: %d\n",emp[i].id);
        printf("Name: %s\n",emp[i].name);
        printf("Net Salary: %.2f\n",netSalary);
    }
    return 0;
}