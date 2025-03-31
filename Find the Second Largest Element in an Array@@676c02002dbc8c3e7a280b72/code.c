#include<stdio.h>
void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    if(n<2){
        printf("-1");
    }
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    int largest=arr[0];
    int Secondlargest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[0]>arr[i]){
            int largest=arr[0];
        }

        if(arr[i]<Secondlargest<largest){
            printf("%d",Secondlargest);

        }
        else{
            printf("-1");
        }
    }






}