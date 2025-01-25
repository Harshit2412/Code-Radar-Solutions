#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&c);
    int sum=a+b;
    int diff=a-b;
    int product=a*b;
    int division=a/b;
    if(c=='+'){
        printf("%d",sum);
    }
    else if(c=='-'){
        printf("%d",diff);
    }
    else if(c=='*'){
        printf("%d",product);
    }
    else if(c=='/'){
        printf{"%d",division};
    }
    
   return 0;
}