#include <stdio.h>
int binary(int arr[], int n, int x) {
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main() {
    int arr[50], n, x, result;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &x);
    result = binary(arr, n, x);
    if (result == -1) {

        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }
    return 0;
}
