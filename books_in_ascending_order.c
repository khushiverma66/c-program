#include<stdio.h>
int main(){
    int n, i,j, a;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                a=arr[i];
                 arr[i]=arr[j];
                 arr[j]=a;
                 }
            }
        }
    printf("books in ascending order:");
    for(i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}