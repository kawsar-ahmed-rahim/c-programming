int main () {
    char name[] = {'r', 'a', 'h', 'i', 'm', '\0'};
    char name[] = "Rahim";
    return 0; 
}

//! format specifier

void printString(char arr[]);

int main() {
    char name[50];
    scanf("%s", name);
    printf("your name is %s", name);
    return0;
}

void printString(char arr[]) {
    for (int i=0; arr[i] != '\0'; i+=){
        printf("%c",arr[i])
    }
}
//! input a string = gets(str) or fgets(str, 100, stdin)
//! output a string = puts(str)

//! standard library function
// length = strlen(str) <<<  <string.h>
// copies value of old to new string = strcpy(newStr, oldStr)
// concatenates = strcat(firstStr, secStr)
//comparison = strcmp(one, two)
        // 0=>equal
        //pos=>first>second
        
