#include<stdio.h>
int maximum(int,int);
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Maximum = %d",maximum(a,b));
    return 0;
}
int maximum(int x,int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}