//question-3
#include <stdio.h>

void reversePrint(int arr[], int n) {
    int i;
    for(i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}

int printSum(int arr[], int n) {
    int i, sum = 0;
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("\nSum = %d", sum);
}

void main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    reversePrint(arr, n);
    printSum(arr, n);

}