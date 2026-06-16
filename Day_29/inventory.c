#include<stdio.h>
struct Item{
    int id;
    char name[50];
    int quantity;
};
int main(){
    int n;
    printf("Enter number of items: ");
    scanf("%d",&n);
    struct Item item[n];
    for(int i=0;i<n;i++){
        printf("Item %d\n",i+1);
        printf("Enter Item ID: ");
        scanf("%d",&item[i].id);
        printf("Enter Item Name: ");
        scanf("%s",item[i].name);
        printf("Enter Quantity: ");
        scanf("%d",&item[i].quantity);
    }
    printf("Inventory\n");
    for(int i=0;i<n;i++){
        printf("ID: %d\n",item[i].id);
        printf("Name: %s\n",item[i].name);
        printf("Quantity: %d\n",item[i].quantity);
    }
    return 0;
}