//! text files = .txt, .c, .java
//! binary files = .exe, .mp3, .jpg


//! file open
FILE *fptr;
fptr = fopen("text.txt", "r");


//! file opening mode
open to read = r
open to read in binary = rb
open to write = w
open to write in binary = wb
open to append = a


//! file close
fclose(fptr);

//! reading from a file character by character


int main () {
    FILE *fptr;
    fptr = fopen("file.txt", "r");
    
    char ch;
    fscanf(fptr, "%c", &ch);
    fprintf("%c",ch);
    fclose(fptr);
    return 0;
}

//! file write


int main () {
    FILE *fptr;
    fptr = fopen("file.txt", "w");
    
    
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');

    fclose(fptr);
    return 0;
}


//! read a char = fgetc(fptr)
//! write a file = fputc('A', fptr)