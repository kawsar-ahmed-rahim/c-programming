//! odd or even
#include<stdio.h>

// int main(){
//     int num;

//     printf("enter number: ");
//     scanf("%d",&num);

//     if(num % 2 == 0){
//         printf("even");
//     } else {
//         printf("odd");
//     }
//     return 0;
// }

//!find bigger number among 2 numbers

// int main(){
//     int num1,num2;

//     printf("enter two  numbers: ");
//     scanf("%d %d", &num1,&num2);

//     if(num1>num2){
//         printf("num1 is bigger");
//     } else {
//         printf("num2 is bigger");
//     }
//     return 0;
// }

//! swap

// int main() {
//     int num1=1,num2=2,temp;

//     temp = num1;
//     num1 = num2;
//     num2 = temp;

//     printf("after swaping : num1 = %d\n num2 = %d ",num1,num2);
//     return 0;
// }

//! swap without third variable

// int main() {
//     int n1=1,n2=2;

//     n1 = n1 + n2;
//     n2 = n1 - n2;
//     n1 = n1 - n2;

//     printf("after swaping : num1 = %d\n num2 = %d ",n1,n2);
//     return 0;
// }


//! vowel & consonant

// int main(){
//     char a;
//     scanf("%c",&a);

//     if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U'){
//         printf("vowel");
//     } else {
//         printf("consonant");
//     }
//     return 0;
// }


//! leap year

int main () {
    int lp;
    scanf("%d",&lp);

    if((lp % 4 == 0 && lp % 100 != 0 )|| lp % 400 == 0){
        printf("leap year");
    
    } else {
        printf("not a leap year");
    }
    return 0;
}