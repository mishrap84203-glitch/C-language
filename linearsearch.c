//Iterative Search
/*#include<stdio.h>

int linear(int arr[], int n, int x) {
    for (int i = 0; i < n; i++)
     {
        if (arr[i] == x) 
        {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 80, 30, 60, 50, 70, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 98;
    int result = linear(arr, n, x);
    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }
    return 0;
}*/

#include <stdio.h>
int linear(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[50], n, x, result;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &x);
    result = linear(arr, n, x);
    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }
    return 0;
}