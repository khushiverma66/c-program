/*#include<stdio.h>
void printhello();
void printgoodbye();
int main(){
    printhello();
    printgoodbye();
    return 0;
}
void printhello(){
    printf("hello \n");
}
void printgoodbye(){
    printf("goodbye");
}*/
/*#include<stdio.h>
void namaste();
void bonjour();
int main(){
    char x;
    scanf("%c",&x);
    if(x="indian"){
        namaste();
    }
    else{
        bonjour();
    }
    return 0;
}
void namaste(){
    printf("namaste");
}
void bonjour(){
    printf("bonjour");
}*/
/*#include<stdio.h>
void namaste();
void bonjour();
int main(){
    printf("enter f for french and i for indian");
    char x;
    scanf("%c",&x);
    if( x=='i' ){
        namaste();
    }
    else{
        bonjour();
    }
    return 0;
}
void namaste(){
    printf("namaste");
}
void bonjour(){
    printf("bonjour");
}*/
/*#include<stdio.h>
void namaste();
void bonjour();
int main(){
    namaste();
    return 0;
}
void namaste(){
    printf("namaste \n");
    bonjour();
}
void bonjour(){
    printf("bonjour");
}*/
/*#include<stdio.h>
void namaste(int x);
void bonjour(int x);
int main(){
    printf("enter f for french and i for indian");
    char x;
    scanf("%c",&x);
    if( x=='i' ){
        namaste(x);
    }
    else{
        bonjour(x);
    }
    return 0;
}
void namaste(int x){
    printf("namaste");
}
void bonjour(int x){
    printf("bonjour");
}*/
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