#include<stdio.h>
int main(){
    int age;
    int status;
    scanf("%d",&age);
    scanf("%d",&status);
    if(age>=18 && status){
        printf("Eligible");
    }
    // else if(age>=18 && status==0){
    //     printf("Not Eligible");
    // }
    else if(age<= 18 && status){
        printf("Not Eligible");
    }
    // else if(age<=18 && status==0){
    //     printf("Not Eligible");
    // }
    return 0;
}