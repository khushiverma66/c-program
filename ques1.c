#include<stdio.h>
int multiplication(int x,int y){
    if(x<y){
        return multiplication(y,x);
    }
    else if(y!=0){
        return (x+multiplication(x,y-1));
    }
    else{
        return 0;
    }
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",multiplication(x,y));
    return 0;
}