#include <stdio.h>
#include <math.h>

int main() {
    int i, num, sum, temp, digits;

    // Check Armstrong numbers between 1 to 500
    for (i = 1; i <= 500; i++) {
        num = i;
        sum = 0;
        digits = 0;

        // Count the number of digits in the current number i
        while (num != 0) {
            digits++;
            num /= 10;
        }

        num = i;

        // Calculate the sum of the cubes of each digit of the current number i
        while (num != 0) {
            temp = num % 10;
            sum += pow(temp, digits);
            num /= 10;
        }

        // Print the Armstrong numbers
        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
