#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a=0;
    int b=0;
    for(int i=0;i<N;i++){
        if(arr[i]%2==0){
            a++;
        }
        else{
            b++;
        }
    }
    printf("%d %d",a,b);
    return 0;

}