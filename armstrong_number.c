#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("give the number -");
    scanf("%d",&n);
    int count =0 ;
    int rem = 0;
    int mul =1;
    int result=0;
    int cnt ;
    int q = n;
    while(q!=0){
        q = q/10;
        count++;
    }
    cnt = count;
    q = n;
    while(q!=0){
        rem = q%10;
        while(cnt !=0){
            mul = mul*rem;
            cnt--;
        }
        result = result + mul;
        cnt = count;
        q = q/10;
        mul = 1;
    }
if(result == n){
    printf("hell yeah");
}
else{
    printf("fuck");
}
}