#include<stdio.h>
struct Account{
    int accNo;
    char name[50];
    float balance;
};
int main(){
    struct Account a;
    printf("Enter Account Number: ");
    scanf("%d",&a.accNo);
    printf("Enter Name: ");
    scanf("%s",a.name);
    printf("Enter Initial Balance: ");
    scanf("%f",&a.balance);
    int choice;
    float amount;
    do{
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter amount: ");
                scanf("%f",&amount);
                a.balance+=amount;
                break;
            case 2:
                printf("Enter amount: ");
                scanf("%f",&amount);
                if(amount<=a.balance)
                    a.balance-=amount;
                else
                    printf("Insufficient Balance\n");
                break;
            case 3:
                printf("Balance = %.2f\n",
                       a.balance);
                break;
        }
    }while(choice!=4);
    return 0;
}