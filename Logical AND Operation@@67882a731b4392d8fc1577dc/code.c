#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if((a && b)>0){
        printf("True");
    }
    else if(a>0 && b<0){
        printf("False");
    }
     else if(a<0 && b>0){
        printf("False");
    }
    else if(a<0 && b<0){
        printf("False");
    }
    return 0;
}