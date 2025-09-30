// 
void printString(char arr[]);

int main() {
    char firstName[] = "kawsar";
    char lastName[] = "rahim";

    printString(firstName);
    printString(lastName);

    return 0;
}

void printString(char arr[]) {
    for(int i=0; arr[i] !='\0'; i++) {
        printf("%c",arr[i])
    }
    printf("\n");
}

//print input's length
int countLength(char arr[]);

int main() {
    char name[100];
    fgets(name, 100, stdin);
    printf("length is : %d", countLength(name));
    return 0;
}

int countLength(char arr[]) {
    int count = 0;
    for(int i=0; arr[i]!='\0'; i++) {
        count++;
    }
    return count-1;
}