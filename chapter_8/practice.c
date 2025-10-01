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

//take input using %c
int main () {
    char str[100];
    char ch;
    int i = 0;

    while (ch != '\n') {
        scanf("%c", &ch);
        str[i] = ch;
        i++; 
    }
    str[i] = '\0';
    puts(str);
}

//salting
void salting(char pass[]);

int main() {
    char pass[100];
    scanf("%s", pass);
    salting(pass);
}

coid salting(char pass[]) {
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, pass);
    strcat(newPass, salt);
    puts(newPass);
}

//slice
void slice(char str[], int n, int m,);

int main() {
    char str[] = "helloworld";
    slice(str, 3, 6);
}

void slice(char str[], int n, int m,) {
    char newStr[200];
    int j = 0;
    for(int i=n; j=0; i<=m; i++, j++) {
        newStr[j] = str[i];
    }
    newStr[i] = '\0';
    puts(newStr);
}

//count vowel
int countVowel(char str[]);

int main () {
    char str[] = "hello world";
    printf("%d", countVowel(str));
}

int countVowel(char str[]) {
    int count = 0;

    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count ++;

        }
    }
    return 0;
}

//check character
void checkChar(char str[], char ch);

int main () {
    char str[] = "hello world";
    char ch = 'e';
checkChar(str, ch);
}

void checkChar(char str[], char ch) {

    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("present");
            return;
        }

        }
        printf("not present");
    }
