#include<stdio.h>
struct Employee{
    int id;
    char name[50];
    float salary;
};
int main(){
    int n;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    struct Employee emp[n];
    for(int i=0;i<n;i++){
        printf("Employee %d\n",i+1);
        printf("Enter ID: ");
        scanf("%d",&emp[i].id);
        printf("Enter Name: ");
        scanf("%s",emp[i].name);
        printf("Enter Salary: ");
        scanf("%f",&emp[i].salary);
    }
    printf("Employee Records \n");
    for(int i=0;i<n;i++){
        printf("ID: %d\n",emp[i].id);
        printf("Name: %s\n",emp[i].name);
        printf("Salary: %.2f\n",emp[i].salary);
    }
    return 0;
}