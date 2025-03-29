void insertionSort(int arr[],int n){
    int i,j,temp;
    for(int i=1;i<n;i++){
        temp = arr[i];
        j=i-1;

    while(j>=0 && arr[j]>temp){
        arr[j+1] = arr[j];
        j--;
    }
    a[j+1]=temp;
}
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return;
}