#include<stdio.h>
int main(){
    char str[100];
    printf("Enter string: ");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        int count=0;
        for(int j=0;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count==1){
            printf("First Non-Repeating Character = %c",str[i]);
            return 0;
        }
    }
    printf("No Non-Repeating Character");
    return 0;
}