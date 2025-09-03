//! integers
// printf("age is %d \n",age)

//! real numbers
// printf("value of pi is %f \n",pi)

//! characters
// printf("star looks like this %c \n",star)

//! take input
// # include<stdio.h> 

// int main() {
//     int age;
//     printf("enter age : ");
//     scanf("%d", &age);
//     printf("age is : %d", age);
//     return 0;
// };

//! sum
// # include<stdio.h>

// int main() {
//     int a, b;

//     printf("enter a : ");
//     scanf("%d", &a);

//     printf("enter b : ");
//     scanf("%d", &b);

//     int sum = a + b;
//     printf("sum is : %d", sum);
//     return 0;
// }


//! area of square
# include<stdio.h>

int main() {
    int side;
    printf("enter side : ");
    scanf("%d", &side);

    printf("area is : %d", side * side);
    return 0;

}

//! area of circle
# include<stdio.h>

int main() {
    float radius;
    printf("enter radius : ");
    scanf("%f", &radius);

    printf("area is : %f", 3.14 * radius * radius);
    return 0;

}