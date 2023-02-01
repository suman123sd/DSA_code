#include<stdio.h>

int binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        // Go To Right part
        if(key>arr[mid]){
            start = mid + 1;
        }
        // Go To Left part
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2; // For update the mid
    }
    return -1;
}

int main(){
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarysearch(even, 6, 12);
    printf("The index of 12 is %d\n",evenIndex);

    int oddIndex = binarysearch(odd, 5, 8);
    printf("The index of 8 is %d\n",oddIndex);
    return 0;
}
