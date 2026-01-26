// //! print a character
// #include<stdio.h>
// int main(){
//     char arr[5] = {'r','a','h','i','m'};
//     printf("%c",arr[2]);
//     return 0;
// }

//! print the string
#include<stdio.h>
#include<string.h>
int main(){
    char arr[] = {'r','a','h','i','m','\0'}; //char arr[]="rahim";

    for(int i=0; arr[i]!='\0'; i++){
        printf("%c",arr[i]);
    }
    return 0;
}


//! reverse a string
int main(){
    char str[15];
    puts("Enter a string: ");
    scanf("%[^\n]s",str);
    puts("The reverse is : ");

    //size
    int size = 0;
    int i = 0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    return 0; 
    printf("%d",size);
    for(int k=0; j=size-1; k<=j; k++; j--){
        char temp = str[i];
        str[k] = str[j];
        str[j] = temp;
    }
    puts(str);
}