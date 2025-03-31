#include<stdio.h>
void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            int temp;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;}

        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    int maximum=arr[n-1]*arr[n-2];
    int minimum=arr[0]*arr[1];
    if(maximum>minimum){
        printf("%d",maximum);
    }
    else{
        printf("%d",minimum);
    }
    
    return 0;



}