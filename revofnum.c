#include<stdio.h>
int main(){
    int n,rev=0;
    scanf("%d",&n);
    int r;
    while(n!=0){
        int r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    printf("%d",rev);
    return 0;
}