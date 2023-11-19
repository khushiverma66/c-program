#include<stdio.h>>
int main(){
    int sum=0;
    int n;
    scanf("%d",&n);
    while(n!=0){
        int r = n%10;
        sum += r;
        n/=10;
    }
    printf("%d",sum);
}