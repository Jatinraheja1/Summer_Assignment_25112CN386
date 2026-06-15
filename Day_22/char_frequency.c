#include<stdio.h>
int main(){
    char str[100],ch;
    int count=0;
    printf("Enter a string: ");
    scanf("%s",str);
    printf("Enter character: ");
    scanf(" %c",&ch);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            count++;
        }
    }
    printf("Frequency = %d",count);
    return 0;
}