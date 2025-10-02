int main () {
    FILE *fptr;
    fptr = fopen("file.txt", "r");
    if(fptr == NULL){
        printf("does not exists");
    } else {
        fclose(fptr);
    }
    return 0;
}