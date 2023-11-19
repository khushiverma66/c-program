#include<stdio.h>
int main(){
    int num, binary_num, decimal_num=0, power=1; int rem;
    printf("enter the num:");
    scanf("%d",&num);
    binary_num=num;
    while(num>0)
{
    rem=num%10;
    decimal_num=decimal_num+rem*power;
    num=num/10;
    power=power*2;
}
printf("%d",decimal_num);
}
