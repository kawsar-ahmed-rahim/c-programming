//! next prime number and difference

#include <stdio.h>
#include <math.h>

int isPrime(int x) {
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);

    int next = N + 1;
    while (!isPrime(next)) {
        next++;
    }

    printf("%d %d\n", next, next - N);
    return 0;
}


//!count even numbers
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}


//!triangle of truth



//! Calculate the total electricity bill based on the tariff.
// Units Consumed	Cost Per Unit
// First 100	5 bdt
// Next 100	10 bdt
// Above 200	15 bdt

//! factorial: taking n(not more than 10 and the number should not more than 20) test cases and return factorial of them

#include <stdio.h>

unsigned long long fact(int n);

int main() {
    int t;
    scanf("%d", &t);

    if (t < 1 || t > 10) {
        return 1;
    }

    int number[t];

    // INPUT LOOP
    for (int i = 0; i < t; i++) {
        scanf("%d", &number[i]);
    }

    // OUTPUT LOOP
    for (int i = 0; i < t; i++) {
        if (number[i] < 0 || number[i] > 20) {
            printf("invalid\n");
        } else {
            printf("%llu\n", fact(number[i]));
        }
    }

    return 0;
}

unsigned long long fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}

//! take an string then remove the duplicate alphabet from the string
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int visited[256] = {0};
    int i;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (!visited[str[i]]) {
            printf("%c", str[i]);
            visited[str[i]] = 1;
        }
    }
    return 0;
}

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


//! perfect number
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == n && n != 0) {
        printf("%d is a Perfect Number\n", n);
    } else {
        printf("%d is not a Perfect Number\n", n);
    }

    return 0;
}
