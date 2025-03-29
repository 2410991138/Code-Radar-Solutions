void selectionSort(int arr[],int n){
    int i,j,min,temp;

    for(i=0; i<n-1; i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
        }
    }
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
}
}

void printArray(int arr[],int n){
    for(int i=0;i < n;i++){
        printf("%d",arr[i]);
    }
}