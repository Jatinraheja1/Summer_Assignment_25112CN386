#include<stdio.h>
int main(){
    char str[100];
    printf("Enter string: ");
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0'){
        int count=1;
        while(str[i]==str[i+1]){
            count++;
            i++;
        }
        printf("%c %d",str[i],count);
        i++;
    }
    return 0;
}