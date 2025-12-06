//!collection of similar data types stored at contiguous memory locations

//! array is a pointer
//! syntax

int marks[] = {23, 45, 45};

//! input and output

int main() {
    int marks[2];

    printf("enter ph : ");
    scanf("%d", &marks[0]);

    printf("enter ch : ");
    scanf("%d", &marks[1]);

    printf("ph = %d, ch = %d", marks[0],marks[1]);

    return 0;
}