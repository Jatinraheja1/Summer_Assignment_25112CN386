#include<stdio.h>
int main(){
    char str[100];
    int j=0;
    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
    printf("String without spaces:\n%s",str);
    return 0;
}