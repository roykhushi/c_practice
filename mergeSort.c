#include<stdio.h>

void conquer(int arr[],int n,int startIdx,int mid,int endIdx){
    int merged [endIdx-startIdx+1];

    int idx1 = startIdx; // index to traverse the left subarray
    int idx2 = mid+1; // index to traverse the right subarray
    int x = 0; //traversing the merged array

    while(idx1 <= mid && idx2 <= endIdx){
        //if any element in left subarray is smalller then add it in the merged array
        if(arr[idx1] < arr[idx2]){
            merged[x++] = arr[idx1++];
        }
        else{
            merged[x++] = arr[idx2++];
        }
    }

    while(idx1 <= mid){
        merged[x++] = arr[idx1++];
    }
    while(idx2 <= endIdx){
        merged[x++] = arr[idx2++]; 
    }

    int merged_len = sizeof(merged)/sizeof(merged[0]);
    for(int i=0,j=startIdx;i<merged_len;i++,j++){
        arr[j] = merged [i];
    }

}

void divide(int arr[],int n,int startIdx,int endIdx){
    if(startIdx >= endIdx){
        return;
    }
    int mid = (startIdx + endIdx)/2;

    divide(arr,n,startIdx,mid);
    divide(arr,n,mid+1,endIdx);
    conquer(arr,n,startIdx,mid,endIdx);


}
int main(void){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    divide(arr,n,0,n-1);
    printf("The sorted array using merge sort is : ");
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}
