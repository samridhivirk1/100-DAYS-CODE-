#include <stdio.h>

int findPivotIndex(int arr[], int size) {
    int leftSum = 0;
    int rightSum = 0;

    // Calculate the total sum of the array
    for (int i = 0; i < size; i++) {
        rightSum += arr[i];
    }

    // Find the pivot index
    for (int i = 0; i < size; i++) {
        rightSum -= arr[i];

        if (leftSum == rightSum) {
            return i;
        }

        leftSum += arr[i];
    }

    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pivotIndex = findPivotIndex(arr, size);

    if (pivotIndex != -1) {
        printf("Pivot index is %d\n", pivotIndex);
    } else {
        printf("No pivot index found\n");
    }

    return 0;
}
