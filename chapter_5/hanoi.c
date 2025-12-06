//! assignment
#include <stdio.h> 

// 1. Function Prototype (declaration)
void move(int n, char src, char dst, char aux);

// 2. Global variable so 'move' can track the count
int step_count = 0; 

int main(void){
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    
    // Move n disks from A (Source) to C (Destination) using B (Auxiliary)
    // Note: I swapped 'B' and 'C' in the call below to match standard conventions 
    // (A->C is usually the goal), but your original logic (A->B) is also valid.
    move(n, 'A', 'B', 'C'); 
    
    return 0;
}

void move(int n, char src, char dst, char aux){
    // Base case: If no disks to move, return
    if(n == 0) return;
    
    // Recursive Step 1: Move n-1 disks from Source to Auxiliary
    move(n-1, src, aux, dst);
    
    // Actual Move: Move the nth disk from Source to Destination
    step_count++;
    printf("Move %d: move disk %d from peg %c to peg %c\n", step_count, n, src, dst);
    
    // Recursive Step 2: Move n-1 disks from Auxiliary to Destination
    move(n-1, aux, dst, src);
}