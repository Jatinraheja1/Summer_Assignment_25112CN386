#include<stdio.h>
struct Contact{
    char name[50];
    char phone[15];
};
int main(){
    int n;
    printf("Enter number of contacts: ");
    scanf("%d",&n);
    struct Contact c[n];
    for(int i=0;i<n;i++){
        printf("Contact %d\n",i+1);
        printf("Enter Name: ");
        scanf("%s",c[i].name);
        printf("Enter Phone Number: ");
        scanf("%s",c[i].phone);
    }
    printf("Contact List\n");
    for(int i=0;i<n;i++){
        printf("\nName: %s\n",c[i].name);
        printf("Phone: %s\n",c[i].phone);
    }
    return 0;
}