#include<stdio.h>
int main(){
    int age=22;
    int *ptr= &age;
    int _age= *ptr;
    printf("%d \n",_age);
    printf("%d \n",age);
    printf("%d \n",*(&age));
    printf("%d \n",*ptr);
    printf("%p \n",&age);
    printf("%u \n",&age);
    printf("%p \n",ptr);
    printf("%u \n",ptr);
    printf("%p \n",&ptr);
    printf("%u \n",&ptr);
}
/*#include<stdio.h>
int main(){
    int x;
    int *ptr;
    ptr=&x;
    *ptr=0;
    printf("x= %d\n",x);
    printf("*ptr = %d\n",*ptr);
    
    return 0;
}*/
