#include<stdio.h>
#include<string.h>
int main(){
    char str[200],longest[100],word[100];
    int i=0,j=0,maxLen=0;
    printf("Enter sentence: ");
    fgets(str,sizeof(str),stdin);
    while(1){
        if(str[i]==' '||str[i]=='\0'||str[i]=='\n'){
            word[j]='\0';
            if(j>maxLen){
                maxLen=j;
                strcpy(longest,word);
            }
            j=0;
            if(str[i]=='\0'||str[i]=='\n'){
                break;
            }
        }
        else{
            word[j]=str[i];
            j++;
        }
        i++;
    }
    printf("Longest Word = %s",longest);
    return 0;
}