// Mirror Right Angled Triangle
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++){
            printf(" ");
        }
        for(int j=1;i<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}