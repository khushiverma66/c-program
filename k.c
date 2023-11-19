#include<stdio.h>
/*{
    printf("hi");
    return 0;
}*/
/*{
    int a[2]={1,0};
    printf("%d", a[0]);
    return 0;
}*/
/*display1(int m);
display2(int *n);
int main()
{
    int arr[]={23,56,67,78,98};
    for (int i=0; i<=6; i++){
        display1(arr[i]);
    }
    for (int i=0; i<=6; i++){
        display2(&arr[i]);
    }
    return 0;

}
display1(int m)
{
    printf("%d \n",m);

}
display2(int *n)
{
    
    printf("%u \n",*n);

}*/
/*int main(){
    int data[5]={1,2,3,4,5};
    int *x;
    printf("enter the value from 0 to 4:");
    int a;
    scanf("%d",&a);
    x=&data[a];
    printf("%u \n",*x);
    return 0;
}*/
int main(){
    int i,n;
    printf("Enter any number= ");
    scanf("%d",&n);
    printf("Natural numbers from 1 to %d : \n",n);
    for(i=1;i<=n;i++){
        printf("%d",i);
    }
    return 0;
}