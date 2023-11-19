#include<stdio.h>
int main(){
    int i,n;
    printf("enter the elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int rev[n];
    int j=0;
    for(i=n-1;i>=0;i--){
        rev[j]=arr[i];
        j++;
    }
    printf("the reversed array:");
    for(i=0;i<n;i++){
        printf("%d \n",rev[i]);
    }
    return 0;
}