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

    
    printf("sum is : %d \n", sum(a, b));

    return 0;
}

int sum(int x, int y) {
    return x + y;
}


//! table

void printTable(int n);

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    printTable(n); //argument/actual parameter/used to send value

    return 0;
}

void printTable(int n) { //parameter/formal parameter/used to receive value
    for(int i=1; i<=10; i++) {
        printf("%d", i*n);
    }
}


//! calculate price

void calculatePrice(float value);

int main() {
    float value = 100.0;
    calculatePrice(value);
    printf("value is : %f\n", value) //100.00000000
    return 0;
}

void calculatePrice(float value) {
    value = value + (0.18 * value);
    printf("final price is : %f\n", value) //118.0000000000
}

//! power
# include<stdio.h>
# include<math.h>


int main() {
    int n = 4;
    printf("%f", pow(n, 2));// pow function always float return kore

    return 0;
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


//! celsius to fahrenheit
float convertTemp(float celsius);

int main() {
    printf("far is : %f",convertTemp(6));
    return 0;
}

int convertTemp(float celsius) {
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

int calcPercentage(int science, int math, int english) {
    return ((science + math + english) / 3 );
}