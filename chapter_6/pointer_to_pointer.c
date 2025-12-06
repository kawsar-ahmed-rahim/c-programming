//! pointer to pointer is who saves pointers address

//!syntax
int **pptr;
char **pptr;
float **pptr;

//! pointer to pointer
# include <stdio.h>
int main() {
    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;
    
}

//! print i by pptr
# include <stdio.h>
int main() {
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n", **pptr);
    
}

//! pointers in function call

# include <stdio.h>
 void square(int n);
void _square(int* n);

int main() {
    int number = 4;
    square(number);  //square = 16
    printf("number = %d\n", number); // number = 4

    _square(&number);   //square = 16
    printf("number = %d\n", number); //number = 16
    return 0;
    
}
// call by value
void square(int n) {
    n = n * n;
    printf("square = %d\n", n) 

// call by reference/address
void square(int *n) {
    *n = (*n) * (*n);
    printf("square = %d\n", *n);
}

//! call by value te variable ar address different thake and call bny reference te address same thake


//! swap 2 numbers

# include <stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);

int main() {
    int x = 3, y = 4;
    swap(x, y); // does not swap
    _swap(&x, &y); // swap
    printf("x = %d & y = %d\n", x, y);
    return 0;

    
}

// call by reference/address
void _swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    printf("square = %d\n", *n);
}

// call by value
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d\n", a, b);
}


//! return multiple values
void doWork(int a, int b, int *sum, int *prod, int *avg);

int main() {
    int a = 3, b = 4;
    int sum, prod, avg;
    doWork(a,b, &sum, &prod, &avg);

    printf("sum = %d, prod = %d, avg = %d\n", sum, prod, avg);
    return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg) {
    *sum = a + b;
    *prod = a + b;
    *avg = ( a + b) / 2;
}