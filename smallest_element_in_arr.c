#include<stdio.h>
int main(){
    int n;
    printf("enter no of elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
        if(arr[0]>arr[i]){
            arr[0]=arr[i];
        }    
    }
    printf("the smallest element is:%d",arr[0]);
    return 0;
}