//! take a number , take the first and last digit then sum it

# include<stdio.h>

int main(){
    int n,first_digit, last_digit, sum=0;

    printf("enter a number: ");
    scanf("%d",&n);

    last_digit = n % 10;

    first_digit = n;

    while(first_digit >= 10){
        first_digit /= 10;
    }
    sum = first_digit + last_digit;

    printf("%d\n",first_digit);
    printf("%d\n",last_digit);
    printf("%d\n",sum);

    return 0;



}