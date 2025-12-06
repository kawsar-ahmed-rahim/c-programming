# include<stdio.h>
//! print 5 times
void printHW(int count);

int main() {
    printHW(5);
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
    printf("sum is : %d",sum(5));
    return 0;
}

//recursive function
int sum(int n) {
    if(n == 1) {
        return 1;
    }
    int sumNm1 = sum(n-1);  // sum(5) // sum(4)+5 // sum(3)+4 // sum(2)+3 // sum(1)+2
                            //15      //10+5=15   // 6+4=10   //3+3=6    //1+2=3
    int sumN = sumNm1 + n;
    return sumN;
}

//! factorial
int fact(int n);

int main() {
    printf("factorial is : %d",fact(5));
    return 0;
}

//recursive function
int fact(int n) {
    if(n == 0) { // base case
        return 1;
    }
    int factNm1 = fact(n-1);   // sum(5) // sum(4)*5 // sum(3)*4 // sum(2)*3 // sum(1)*2
                            //15      //10*5=15   // 6*4=10   //3*3=6    //1*2=3
    int factN = factNm1 * n;
    return factN;
}




//! nth term of fibonacci(0,1,1,2,3,5,8,13..............)
 int fib(int n);
 
 int main() {
    printf("%d", fib(9))
    return 0;
 }
int fib(int n) {                  //fib(n) = fib(n-1) + fib(n-2)

    if(n == 0) {
            return 0;
        }
    else (n == 1) {
            return 1;
        }

    int finNm1 = fib(n-1);
    int fibNm2= fib(n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}