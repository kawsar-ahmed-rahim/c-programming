//! malloc()
<stdlib.h>

takes number of types to be allocated & returns a pointer of type void

ptr = (int *) malloc(5 * sizeof(int));


//! calloc()

ptr = (float *) calloc(5, sizeof(float));

//! free()

we use it to free memory that is allocated using malloc & calloc

free(ptr);

//! realloc()

reallocate (increase or decrease) memory using the same pointer & size;

ptr = realloc(ptr, newSize);