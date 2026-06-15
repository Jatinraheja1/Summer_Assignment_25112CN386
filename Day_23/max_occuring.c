#include<stdio.h>
int main(){
    char str[100];
    printf("Enter string: ");
    scanf("%s",str);
    int maxFreq=0;
    char maxChar;
    for(int i=0;str[i]!='\0';i++){
        int count=0;
        for(int j=0;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>maxFreq){
            maxFreq=count;
            maxChar=str[i];
        }
    }
    printf("Maximum Occurring Character = %c\n",maxChar);
    printf("Frequency = %d",maxFreq);
    return 0;
}