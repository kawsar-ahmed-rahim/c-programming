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
