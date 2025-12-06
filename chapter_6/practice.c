
# include <stdio.h>
//! assaigned x's value by pointer
int main() {
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0; // x = 0

    printf("x = %d\n", x); // 0
    printf("*ptr = %d\n", *ptr); // 0


    *ptr += 5; // x = 5
    printf("x = %d\n", x); // 5
    printf("*ptr = %d\n", *ptr); // 5

   (*ptr)++;
    printf("x = %d\n", x); // 6
    printf("*ptr = %d\n", *ptr); // 6

    return 0;
}

//!pointer(int) increment decrement
int main(){
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u",ptr); //2000
    ptr++;
    printf("ptr = %u",ptr); //2004
    ptr--;
    printf("ptr = %u",ptr); //2000 

    return 0;
    
}


//!pointer(float) increment decrement
int main(){
    float price = 100.00;
    float *ptr = &price;
    printf("ptr = %u",ptr); //2000
    ptr++;
    printf("ptr = %u",ptr); //2004
    ptr--;
    printf("ptr = %u",ptr); //2000 

    return 0;
    
}

//! comparison and difference

int main() {
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u, %u difference = %u\n", ptr, _ptr, ptr-_ptr);
    _ptr = &age;
    printf("comparison = %u\n", ptr == _ptr);
    return 0;

}