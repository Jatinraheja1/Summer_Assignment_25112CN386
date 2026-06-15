#include<stdio.h>
struct Book{
    int id;
    char title[50];
    char author[50];
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
        printf("Enter Title: ");
        scanf("%s",b[i].title);
        printf("Enter Author: ");
        scanf("%s",b[i].author);
    }
    printf("Library Records\n");
    for(int i=0;i<n;i++){
        printf("\nBook ID: %d\n",b[i].id);
        printf("Title: %s\n",b[i].title);
        printf("Author: %s\n",b[i].author);
    }
    return 0;
}