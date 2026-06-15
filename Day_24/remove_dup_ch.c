#include<stdio.h>
int main(){
    char str[100];
    printf("Enter string: ");
    scanf("%s",str);
    printf("After removing duplicates: ");
    for(int i=0;str[i]!='\0';i++){
        int duplicate=0;
        for(int j=0;j<i;j++){
            if(str[i]==str[j]){
                duplicate=1;
                break;
            }
        }
        if(!duplicate){
            printf("%c",str[i]);
        }
    }
    return 0;
}