#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=2;i<n;i++){
        if (n%i==0){
            sum+=1;
            break;
        }
        if(sum==1 && n>1){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }
    return 0;
}
