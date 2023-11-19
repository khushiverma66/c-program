#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int l=n%10;
    int f;
    while(n!=0){
        f=n%10;
        n/=10;
    }
    printf("%d %d \n",l,f);
    return 0;
}