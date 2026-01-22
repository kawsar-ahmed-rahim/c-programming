//! string = a character array terminated by a '\0'

//! null character denotes string termination

//! syntax
 
int main () {
    char name[] = {'r', 'a', 'h', 'i', 'm', '\0'};
    char name[] = "Rahim";
    return 0; 
}

//! format specifier


int main() {
    char name[50];

    //! scanf cannot input multi-word strings with spaces.

    //    scanf("%[^\n]%*c", s);
        // Read a line of input including spaces until a newline character, and consume the newline


    //scanf("\n"); 
    //fgets(sen, sizeof(sen), stdin);

     //getchar();              // Consumes the newline left after %s
    //scanf("%[^\n]", sen);   // Reads a full sentence until newline

    
    scanf("%s", name);
    printf("your name is %s", name);
    return0;
}

//! input a string = gets(str) <<<  fgets(str, 100, stdin)
//! output a string = puts(str)

//! input and output
int main(){
    char str[100];
    fgets(str, 100, stdin);
    puts(str);

    return 0;
}

//! standard library function


// length = strlen(str) <<<  <string.h>

// copies value of old to new string = strcpy(newStr, oldStr)  //oldstr ar value newstr a save hobe

// concatenates = strcat(firstStr, secStr) // dui str ke jora lagabe

//!concatenate

int main(){
    char firststr[100] = "Hello";
    char secondstr[] = "World";
    strcat(firstStr, secStr)    puts(firststr);

    return 0;
}
//comparison = strcmp(one, two)
        // 0=>equal
        //pos=>first>second
        //neg=>first<second
        
