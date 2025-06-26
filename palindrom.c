#include<stdio.h>
int main (){
    int n,result =0 ,q, reminder;
    printf("give the number-\n");
    scanf("%d",&n);
    q = n;
    while (q != 0){
        reminder =q%10;
        result = result*10 + reminder;
        q = q/10;
    }
    if (result == n){
        printf("hell yeah");
    }
    else {
        printf("fuck off");
    }
}