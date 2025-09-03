//! say namaste or bonjur

# include<stdio.h>
void namaste();
void bonjour();

int main() {
    printf("enter f for french and i for indian : ");
    char ch;
    scanf("%c", &ch);

    if(ch == 'i') {
        namaste();
    } else {
        bonjour();
    }
    return 0;
}

void namaste() {
    printf("Namaste\n");
}

void bonjour() {
    printf("bonjour\n");
}

//! sum
# include<stdio.h>

int sum(int a, int b);

int main() {
    int a, b;
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter second number : ");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("sum is : %d \n", s);

    return 0;
}

int sum(int a, int b) {
    return a+ b;
}


//! table

void printTable(int n);

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    printTable(n); //argument/actual parameter

    return 0;
}

void printTable(int n) { //parameter/formal parameter
    for(int i=1; i<=10; i++) {
        printf("%d", i*n);
    }
}


//! calculate price

void calculatePrice(float value);

int main() {
    float value = 100.0;
    calculatePrice(value);
    printf("value is : %f\n", value)
    return 0;
}

void calculatePrice(float value) {
    value = value + (0.18 * value);
    printf("final price is : %f\n", value)
}

//! power
# include<stdio.h>
# include<math.h>

void calculatePrice(float value);

int main() {
    int n = 4;
    printf("%f", pow(n, 2));

    return 0;
}

void calculatePrice(float value) {
    value = value + (0.18 * value);
    printf("final price is : %f\n", value)
}


//! area of a square, circle, rectangle
# include<stdio.h>
# include<math.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main() {
    float a= 5.0;
    float b = 10.0;

    printf("area is : %f", rectangleArea(a, b));
    return 0;
}

float squareArea(float side) {
    return side * side;
}

float circleArea(float side) {
    return 3.14 * rad * rad;
}

float rectangleArea(float side) {
    return a * b;
}