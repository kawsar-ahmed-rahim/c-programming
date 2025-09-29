int arr[] = {{1, 2}, {3, 4}}

arr[0][0] = 1
arr[0][1] = 2
arr[1][0] = 3
arr[1][1] = 4


//count odd numbers

int countOdd(int arr[], int n);
int main () {
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("%d", countOdd(arr, 6))
    return 0;
}

int countOdd(int arr[], int n) {
    int count = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

// reverse an array

void reverse(int arr[], int n);
void printArr(int arr[], int n);


int main () {
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    printArr(arr, 5);
    return 0;
}

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
       printf("%d\t", arr[i])}
       printf("\n"); 

    }


void reverse(int arr[], int n) {
    for(int i=0; i<n/2; i++) {
       int firstVal = arr[i];
       int secondVal = arr[n-i-1];
       arr[i] = secondVal;
       arr[n-i-1] = firstVal;

    }
    return count;
}

// nth fibonacci number by a loop

int main() {
    int n;
    printf("enter n (n>2): ");
    scanf("%d, &n");

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for(int i=2; i<n; i++){
        fib[i] = fib[i-1] + fib[i-2]
        printf("%d\t", fib[1]);
    }
    printf("\n");
    return 0;
}

//2D array, storing the tables of 2 & 3

void storeTable(int arr[][10], int n, int m, int number);

int main () {
    int tables[2][10];
    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);

    for(int i=0, i<10, i++) {
        printf("%d\t",tables[0][i]);
}
printf("\n ")
for(int i=0, i<10, i++) {
        printf("%d\t",tables[1][i]);
}

    return 0;

}

void storeTable(int arr[][10], int n, int m, int number) {
    for(int i=0, i<m, i++) {
        arr[n][i] = number * (i+1);
    }