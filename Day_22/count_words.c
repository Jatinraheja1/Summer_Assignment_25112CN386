#include<stdio.h>
int main(){
    char str[100];
    int words=1;
    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            words++;
        }
    }
    printf("Number of words = %d",words);
    return 0;
}