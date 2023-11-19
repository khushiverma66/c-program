#include<stdio.h>
    int factorial(int n){
        if(n==0){
            return 1;
        }
        else{
            return n * factorial(n-1);
        }
    }
    int main(){
        int n;
        printf("no. of elements:");
        scanf("%d",&n);
        if(n<0){
            return 1;
        }
        int result=factorial(n);
        printf("%d",result);
        return 0;
    }