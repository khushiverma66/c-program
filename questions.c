
#include<stdio.h>
#include<string.h>
void changeNum(char *s){
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }

}
int main(){
    char str[20];
    printf("Enter the 8 digit num -> ");
    scanf("%s",&str);
    changeNum(str);
    printf("%s",str);
    return 0;

}