# include<stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];  
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < cols; j++) { 
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

  
    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]); 
        }
        printf("\n"); 
    }
    
    printf("\nMatrix after 90 degree clockwise rotation:\n");
    for (int j = 0; j < cols; j++) {
        for (int i = rows - 1; i >= 0; i--) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//! matrix rotation
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];
    int rotated[n][n];

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Rotate 90 degrees clockwise
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotated[i][j] = matrix[n - 1 - j][i];
        }
    }

    // Print rotated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", rotated[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//!simple operations

#include <stdio.h>

int main() {
    char op;
    int a, b;

    scanf(" %c", &op);   // space before %c ignores newline
    scanf("%d %d", &a, &b);

    if (op == 'A') {
        printf("%d\n", a + b);
    } 
    else if (op == 'S') {
        printf("%d\n", a - b);
    } 
    else if (op == 'M') {
        printf("%d\n", a * b);
    }

    return 0;
}


//!You may know that the window of the bus has a sliding glass that slides horizontally. The horizontal 
// !length of the window is W and the horizontal length of the sliding glass is G. Your task is to slide the 
//! glass and distribute equal empty space to both passengers.
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int W, G;
        scanf("%d %d", &W, &G);

        double empty_space = (W - G) / 2.0;
        printf("%.4f\n", empty_space);
    }

    return 0;
}
