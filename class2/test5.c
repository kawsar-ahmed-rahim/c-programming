//!Write a program that takes a positive integer N as input and finds the sum of its digits repeatedly until 
//!the result converges to a single digit. Output the final single-digit result.
#include <stdio.h>

int main() {
    int n, sum;

    scanf("%d", &n);

    while (n >= 10) {   // repeat until single digit
        sum = 0;

        while (n > 0) {
            sum += n % 10;  // add last digit
            n /= 10;       // remove last digit
        }

        n = sum;  // assign sum back to n
    }

    printf("%d\n", n);

    return 0;
}
