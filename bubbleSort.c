#include<stdio.h>


void bubbleSort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(void){
    int arr [] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    printf("The sorted array is : \n");
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}