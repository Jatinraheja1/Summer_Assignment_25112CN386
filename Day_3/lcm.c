    #include<stdio.h>
    int lcm(int, int);
    int gcd(int, int);
    int main(){
        int a,b;
        printf("Enter two numbers to find their LCM: ");
        scanf("%d %d",&a,&b);
        printf("LCM of %d and %d is %d", a, b, lcm(a,b));
        return 0;
    }
    int gcd(int x, int y){
        if(y == 0){
            return x;
        }
        else{
            return gcd(y, x % y);
        }
    }
    int lcm(int p, int q){
            return ((p*q)/gcd(p,q));
    }