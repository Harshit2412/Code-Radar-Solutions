#include<stdio.h>
int main(){
    int n;
    scanf("%c",&n);
    for(int i=1;i<=n;i++){
        for(char a='A';a<=a+i;a++){
            printf("%c ",a);
        }
        printf("\n");
    }
}