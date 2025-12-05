#include <stdio.h>

int findCeil(int arr[], int size, int x) {
    int left = 0;
    int right = size - 1;
    int ceilIndex = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x) {
            ceilIndex = mid;
            right = mid - 1; 
        } else {
            left = mid + 1;
        }
    }

    return ceilIndex;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int x = 2;
    int size = sizeof(arr) / sizeof(arr[0]);
    int ceilIndex = findCeil(arr, size, x);

    if (ceilIndex != -1) {
        printf("Ceil of %d is %d at index %d\n", x, arr[ceilIndex], ceilIndex);
    } else {
        printf("Ceil of %d does not exist\n", x);
    }

    return 0;
}
