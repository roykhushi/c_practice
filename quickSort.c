#include<stdio.h>

int partition(int arr[],int n, int low,int high){
    int pivot = arr[high];
    int i = low-1;

    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    //placing the pivot
    i++;
    int temp = arr[i];
    arr[i] = pivot;
    arr[high] = temp;

    return i; //pivot index


}

void quickSort(int arr[],int n, int low, int high){
    if(low<high){
        int pivotidx = partition(arr,n,low,high);
        quickSort(arr,n,low,pivotidx-1);
        quickSort(arr,n,pivotidx+1,high);
    }
}
int main(void){

    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,n,0,n-1);
    printf("The sorted array using QuickSort is : ");
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    return 0;

}