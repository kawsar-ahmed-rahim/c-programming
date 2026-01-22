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
