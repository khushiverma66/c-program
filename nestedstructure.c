#include <stdio.h>
struct address{
    int pincode;
    char city[10];
};
struct students{
    char name[20];
    int roll_no;
    struct address a;
    struct himani{
        int class;
        char name[20];
    }b;
}s;
int main(){
    struct students s={"khushi",12,{110088,"delhi"},{2,"himani"}};
    printf("%s %d %d %s %d %s \n",s.name,s.roll_no,s.a.pincode,s.a.city,s.b.class,s.b.name);
    return 0;
}

