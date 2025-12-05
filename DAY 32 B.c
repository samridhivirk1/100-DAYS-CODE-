#include <stdio.h>

int main() {
    int num, digit, max_count = 0;
    int count[10] = {0}; 

    printf("Enter an integer: ");
    scanf("%d", &num);
v
    while (num != 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            digit = i;
        }
    }

    printf("Digit %d occurs the most times: %d\n", digit, max_count);

    return 0;
}
