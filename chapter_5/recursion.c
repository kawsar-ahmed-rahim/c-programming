# include<stdio.h>
//! print 5 times
void printHW(int count);

int main() {
    printHW(10);
    return 0;
}

// recursive function
void printHW(int count) {
    if(count == 0) {
        return;
    }
    printf("Hello world\n");
    printHW(count-1);
}

//! sum of n value
int sum(int n);

int main() {
    printf("sum is : %d",sum(6));
    return 0;
}

//recursive function
int sum(int n) {
    if(n == 1) {
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}

//! factorial
int fact(int n);

int main() {
    printf("factorial is : %d",fact(6));
    return 0;
}

//recursive function
int fact(int n) {
    if(n == 0) { // base case
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
    return factN;
}

//! celsius to fahrenheit
float convertTemp(float celsius);

int main() {
    printf("far is : %f",convertTemp(6));
    return 0;
}

//recursive function
int convertTemp(float celsius) {
    if(n == 0) { // base case
        return 1;
    }
    float far = celsius * (9.0/5.0) + 32;
        return far;
}
 //! percentage
int calcPercentage(int science, int math, int english);

int main() {
    int sc = 98;
    int math = 96;
    int english = 99;
    printf("per. is : %d",calcPercentage(sc, math, english));
    return 0;
}

//recursive function
int calcPercentage(int science, int math, int english) {
    if(n == 0) { // base case
        return 1;
    }
    return ((science + math + english) / 3 );
}


//! nth term of fibonacci
 int fib(int n);
 int main() {
    printf("%d", fib(9))
    return 0;
 }
int fib(int n) {
    if(n == 0 || n ==1) {
        if(n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
    }
    int finNm1 = fib(n-1);
    int fibNm2= fib(n-2);
    int fibN = fibNm1 + fibNm2;
    // printf("fib of %d is : %d", n, fibN);
    return fibN;
}