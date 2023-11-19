/*#include <stdio.h>

int main() {
  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d\n", matrix[i][j]);
    }
  }
  
  return 0;
}*/
/*#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);
    
    return 0;
}*/
/*#include <stdio.h>
int main() {
    int dividend, divisor, quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}*/
/*#include<stdio.h>
int main(){
  int intType;
  float floatType;
  double doubleType;
  char charType;
  printf("size of int:%zu \n",sizeof(intType));
  printf("size of float:%zu \n",sizeof(floatType));
  printf("size of double:%zu \n",sizeof(doubleType));
  printf("size of char:%zu",sizeof(charType));
  return 0;
}*/
/*#include<stdio.h>
int main(){
  int first;
  int second;
  int temp;
  printf("Enter first no.:");
  scanf("%d",&first);
  printf("enter second no.:");
  scanf("%d",&second);
  temp=first;
  first=second;
  second=temp;
  printf("after swapping,first no.:%d \n",first);
  printf("after swapping,second no.:%d",second);
  return 0;
}*/
/*#include<stdio.h>
int main(){
  char c;
  int lowercase_vowel;
  int uppercase_vowel;
  printf("enter an alphabet:");
  scanf("%c",&c);
  lowercase_vowel=(c == 'a'|| c == 'e' || c == 'i' || c == 'o' || c == 'u');
  uppercase_vowel=(c == 'A'|| c == 'E' || c == 'I' || c == 'O' || c == 'U');
  if (lowercase_vowel || uppercase_vowel){
    printf("%c is a vowel",c);
  }
  else{
    printf("%c is a consonant",c);
  }
  return 0;
}*/
/*#include<stdio.h>
int main(){
  int n1,n2,n3;
  printf("enter three numbers:");
  scanf("%d %d %d",&n1,&n2,&n3);
  if(n1>=n2 && n1>=n3){
    printf("%d is largest",n1);
  }
  else if(n2>=n1 && n2>=n3)
    printf("%d is largest",n2);
  }
  else if(n3>=n1 && n3>=n2){
    printf("%d is largest",n3);
  }
  return 0;
}*/
/*#include<stdio.h>
int main(){
  int i,n;
  printf("enter a number:");
  scanf("%d",&n);
  for(i=1;i<=10;i++){
    printf("%d * %d = %d\n",n,i,n*i);
  }
  return 0;

}*/
#include<stdio.h>
int main(){
  int n,i;
  scanf("enter no. of elements:%d",&n);
  int arr[n];
   for(i=0;i<n;i++){
    scanf("%d ",&arr[i]);
  }
  for(i=1;i<n;i++){
    if(arr[0]<arr[i]){
      arr[0]=arr[i];
    }
  }
  printf("%d \n",arr[0]);

  return 0;
}
