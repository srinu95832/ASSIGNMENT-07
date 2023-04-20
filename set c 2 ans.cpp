#include <stdio.h>

int main() {
    int i, j, isPrime;

    // Check prime numbers between 1 to 100
    for (i = 2; i <= 100; i++) {
        isPrime = 1;

        // Check if current number i is prime or not
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        // Print the prime numbers
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
