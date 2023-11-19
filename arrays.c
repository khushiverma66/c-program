/*#include<stdio.h>
int main(){
    int arr[4]={1,2,3,4};
    printf("%u \n",arr+1);
    printf("%u \n",&arr+1);
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int i;
    int a[4]={1,2,3,4};
    int *p=a;
    int (*p1)[4];
    p1=&a;
    for(i=0;i<4;i++){
        printf("%u \n",*p1+i);
    }  return 0;
}*/
/*#include<stdio.h>
int main(){
    int i;
    int arr[4][2]={
        {1234,56},
        (1212,33),
        {1434,80},
        (5634,78)
    };
    for(i=0;i<=3;i++){
        for(int j=0;j<=1;j++){
            printf("%d \n",*(*(arr+i)+j));
        }
        printf("\n");
    }
    return 0;
}*/
#include<stdio.h>
void display(int d[][4],int row,int col);
int main(){
    int arr[4][4]={
        (1,2,3,4),
        (6,7,8,9),
        (2,3,4,5),
        (4,5,6,7)
};

}
