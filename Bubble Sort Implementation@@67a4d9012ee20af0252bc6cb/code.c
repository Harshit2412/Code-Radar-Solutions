int bubbleSort(int arr[],int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i-1){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
printArray(int arr[],int n){
    for(int i=1;i<=n;i++){
        printf("%d ",arr[i]);
    }
}