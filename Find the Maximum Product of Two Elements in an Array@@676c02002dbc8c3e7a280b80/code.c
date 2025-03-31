#include<stdio.h>
void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            int temp;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

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
    printf("%d",maximum);
    return 0;



}