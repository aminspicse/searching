#include<stdio.h>

int arr[100]={10,20,23,12,3,89}, size=5;

int main(){

    printf("Before sort: ");
    for(int i=0; i<=size;i++){
        printf("%d\t",arr[i]);
    }

    sort(arr,size); // sorting using bubble sort
    printf("\nAfter sort: ");
    for(int i=0; i<=size;i++){
        printf("%d\t",arr[i]);
    }

    // binary search
    int search, left=0, right=size, mid=0;
    printf("Search :");
    scanf("%d",&search);

    while(left <= right){
        mid = (left+right)/2;
        if(arr[mid] == search){
            printf("Data found %d Index Number %d",arr[mid], mid);
            break;
        }else if(arr[mid] < search){
            left = mid+1;
        }else if(arr[mid] > search){
            right = mid-1;
        }else{
            printf("%d Item Not Found",search);
        }

    }


    return 0;
}


void sort(int arr[], int size){

    for(int i=0; i<= size; i++){
        for(int j=i+1; j<=size; j++){
            if(arr[i] > arr[j]){
                int temp=arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
