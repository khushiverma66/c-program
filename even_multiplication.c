#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int prod=1;
    for(i=2;i<=n;i++){
        if(i%2==0){
            prod=prod*i;
        }
    }
    printf("%d",prod);

}