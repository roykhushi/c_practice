#include<stdio.h>
#include<stdbool.h>

int binarySearch(int arr[],int item,int n){
    
    int start=0;
    int end = n-1;
    
    
    while(start<=end){
        int mid = (start+end)/2;
        if(item == arr[mid]){
            printf("Element found!\n");
            return mid;
        }
        else if(item < arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int main(void){
    
    int arr[] = {11,22,30,33,40,55,60,77,80,88,99};
    int item = 69;
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = binarySearch(arr,item,n);
    if(result == -1)
        printf("Element Not Found");
    else
        printf("%d",result);
    
    return 0;
}
