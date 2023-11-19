#include<stdio.h>
int main(){
    int n,i, sum=0, expected_sum;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    expected_sum=(n*(n+1))/2;
    printf("%d",expected_sum-sum);
    return 0;
}