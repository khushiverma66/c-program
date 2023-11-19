#include<stdio.h>
int main(){
    int n,m;
    int i,j;
    scanf("%d \n",&n);
    scanf("%d \n",&m);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==m) count++;
        }
    }
    printf("%d",count);

}