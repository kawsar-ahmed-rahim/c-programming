//! print final cost with gst

#include<stdio.h>
int main() {
    float price[3];
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("total price = %f", price[0]+(0.18*price[0]));
    printf("total price = %f", price[1]+(0.18*price[1]));
    printf("total price = %f", price[2]+(0.18*price[2]));

    return 0;
 }


//! traverse an array
int main() {
    int aadhar[5];

    //input
    int *ptr = &aadhar[0];
    for(int i=0; i<6; i++) {
        printf("%d index : ",i);
        scanf("%d", &aadhar[i]);
    }

    //output
    for(int i=0; i<6; i++){
        printf("%d index = %d\n", i, aadhar[i]);
    }
 }

 //!array as function argument

void printNumber(int arr[], int n);
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    printNumber(arr, 6);
    return 0;
}

void printNumber(int arr[], int n) {
    for(int i = 0; i<n; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
 