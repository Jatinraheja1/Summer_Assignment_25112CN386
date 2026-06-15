#include<stdio.h>
int main(){
    char str1[100],str2[100];
    printf("Enter first string: ");
    scanf("%s",str1);
    printf("Enter second string: ");
    scanf("%s",str2);
    int freq1[26]={0};
    int freq2[26]={0};
    int i=0;
    while(str1[i]!='\0'){
        freq1[str1[i]-'a']++;
        i++;
    }
    i=0;
    while(str2[i]!='\0'){
        freq2[str2[i]-'a']++;
        i++;
    }
    for(i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}