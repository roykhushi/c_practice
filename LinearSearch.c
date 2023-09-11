//implementing linear search
#include<stdio.h>
#include<stdbool.h>

bool search(int arr[] , int n , int x){
    bool flag = false;
    for (int i=0;i<n;i++){
        if(arr[i]==x){
            printf("element found\n");
            flag = true;
        }
    }
    return flag;
}
int main(void){
    
    int arr [] ={2,3,4,10,40};
    int x=20;
    int N = sizeof(arr)/sizeof(arr[0]);
    if(!search(arr,N,x)){
        printf("Element not found\n");
    }

    return 0;
}