#include <stdio.h>

int main() {
    int i, j, sum;

    // Check perfect numbers between 1 to 100
    for (i = 1; i <= 100; i++) {
        sum = 0;

        // Check if current number i is perfect or not
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }

        // Print the perfect numbers
        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
