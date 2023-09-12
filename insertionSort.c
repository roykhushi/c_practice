#include<stdio.h>

void insertionSort(int arr[], int n){
    //considering the first element in the sorted sub array
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }

}

int main(void){
    int arr [] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);

    printf("The sorted array is : ");
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}