/*#include <stdio.h>
int main(){
    opening file-
FILE *fptr
fptr = fopen("test.txt","r")
closing file-
fclose("fptr")    
return 0;
}*/
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("khushi.txt","r");
    if(fptr== NULL){
        printf("FILE DOESN'T EXISTS");
    }else{
        printf("FILE EXIST");
    }
    fclose(fptr);
    return 0;
}