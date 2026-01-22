# include<stdio.h> // pre-processor director
# include<stdio.h>
//! even or odd
int main() {
    int number;
    printf("enter number : ");
    scanf("%d", &number);

    if(number >= 0) {
        printf("positive \n");
        if(number % 2 == 0) {
            printf("even \n");
        } else {
            printf("odd \n");
        }
    }
    else {
        printf("child \n");
    }
    printf("thank you");
    return 0;
}

