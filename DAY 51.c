#include <stdio.h>

int main() {
    int nums[] = {1, 2, 2, 2, 3, 4, 5};
    int target = 2;
    int first = -1, last = -1;


    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    for (int i = sizeof(nums) / sizeof(nums[0]) - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;
        }
    }

    printf("First occurrence: %d\n", first);
    printf("Last occurrence: %d\n", last);

    return 0;
}
