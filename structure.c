/*

#include <stdio.h>

struct students
{
    int roll_num;
    char student_name[20];
    float percentage;
};


int main()
{
    struct students khushi= {1,"khushi", 23.3};
    struct students ravneet= {2, "ravneet", 99.99};
    struct students oreo= {85.2};

    printf("%d %s %.2f \n", khushi.roll_num, khushi.student_name, khushi.percentage);
    printf("%d %s %.2f \n", ravneet.roll_num, ravneet.student_name, ravneet.percentage);
    printf("%d %s %.2f \n", oreo.roll_num, oreo.student_name, oreo.percentage);

    return 0;
}

*/

/*#include <stdio.h>
struct distance
{
    int feet;
    float inch;
    

};

int sum(int arr[], int size);

int main()
{
    int size;

    printf("Enter no of objects: ");
    scanf("%d", &size);


    struct distance arr[size];
    for(int i=0; i<size; i++){

        scanf("%d %f", &arr[i].feet, &arr[i].inch);
    }

    for(int i=0; i<size; i++){

        printf("%d %f \n", arr[i].feet,arr[i].inch);
    }


    sum(arr,size);
    
    
    return 0;
}

int sum(int arr[], int size){

    int sumfeet=0;
    int suminch=0;

    for(int i=0; i<size; i++){

        if(arr[i].inch<=12){
            sumfeet= sumfeet+arr[i].feet;
            suminch= suminch+arr[i].inch;
        }

        else{

        }

        printf("sum of feet: %d \n", sumfeet);
        printf("sum of inch: %d \n", suminch);



    }



*/
/*#include<stdio.h>
struct students {
    int rollno;
    char name[23];
};
int main(){
    struct students k = {1,"a"};
    struct students *p1 = &k;
    printf("%d %s \n",p1->rollno, p1->name);
    printf("%lu",sizeof k.rollno);
    return 0;
}*/
/*#include<stdio.h>
#pragma stack(1)
struct students{
    char a;
    //char b;
    //char c;
    //char d;
    //char e;
    int s;
    double x;
};
int main(){
    struct students r;
    printf("%d  \n",sizeof(r));
    printf("%lu",sizeof(r));
    return 0;
}*/