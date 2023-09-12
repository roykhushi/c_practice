#include<stdio.h>

void selectionSort(int arr[], int n){
    //moving the min index
    for(int i=0;i<n;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        
        if(min_index != i){
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}
   
}

int main(void){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,n);
    printf("The sorted array is: ");

    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}