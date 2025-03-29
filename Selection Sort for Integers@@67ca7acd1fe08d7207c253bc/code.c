void selectionSort(int arr[],int n);
min = arr[0];
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
            min = j;
        }
    }
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
}

void printArray(int arr[],int n){
    for(int i=0,i<n;i++){
        printf("%d",arr[j]);
    }
}