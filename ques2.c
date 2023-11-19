/*#include<stdio.h>>
int N=20;
int n=1;
void function1(){
    if(n<=N){
        printf("%d \n",n);
        n++;
        function2();
    }
    else{
        return 0;
    }
}
void function2(){
    if(n<=N){
        printf("%d \n",n);
        n++;
        function1();
    }
    else{
        return 0;
    }
}
int main(){
    function1();
    return 0;
}*/
///
///
///
/*#include<stdio.h>>
int N=20;
int n=1;
void function1(){
    if(n<=N){
        printf("%d \n",n);
        n++;
    }
    else{
        return 0;
    }
}
int main(){
    function1();
    return 0;
}*/
void printNaturalNumbers(int lowerLimit, int upperLimit);
int main()
{
    int lowerLimit, upperLimit;  
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);
    printf("All natural numbers from %d to %d are: ", lowerLimit, upperLimit);
    printNaturalNumbers(lowerLimit, upperLimit);
    
    return 0;
}    

void printNaturalNumbers(int lowerLimit, int upperLimit)
{
    if(lowerLimit > upperLimit)
        return;
    printf("%d, ", lowerLimit);
    printNaturalNumbers(lowerLimit + 1, upperLimit);
}