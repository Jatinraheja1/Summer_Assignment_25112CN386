#include<stdio.h>
struct Book{
    int id;
    char title[50];
};
int main(){
    int n;
    printf("Enter number of books: ");
    scanf("%d",&n);
    struct Book b[n];
    for(int i=0;i<n;i++){
        printf("Book %d\n",i+1);
        printf("Enter Book ID: ");
        scanf("%d",&b[i].id);
        printf("Enter Book Title: ");
        scanf("%s",b[i].title);
    }
    printf("Library Books\n");
    for(int i=0;i<n;i++){
        printf("ID: %d  Title: %s\n",
               b[i].id,b[i].title);
    }
    return 0;
}