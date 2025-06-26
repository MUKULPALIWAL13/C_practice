#include<stdio.h>
int fac(int n);
int fac(int n){
    int q;
    q =n ;
    int ans =1;
    if(n==0){
        ans =1;
    }
    else{
        while(q!=0){
        ans = ans*q;
        q--;
    }
    }
    return ans;  
}
int main(){
    int num;
    int x ;
    int rem;
    int result =0 ;
    int m=0;
    printf("give ur number-");
    scanf("%d",&num);
    x =num;
    while(x!=0){
        rem = x%10;
        m = fac(rem);
        result = result +m;
        x = x/10;
    }
    if(result == num){
        printf("hell,yeaah");
    }
    else{
        printf("fuck");
    }
    return 0;
}