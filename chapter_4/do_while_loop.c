# include<stdio.h>
//! print 1 to 5
int main() {
    int i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while(i<=5);
    return 0;
}
//! take input and break when it is a odd number

int main() {
    int n;
    do {
        printf("enter number : ");
        scanf("%d\n", &n);
        printf("%d\n", n);
 
        if(n % 2 != 0) {
            break;
        }
    } while(1);
    printf("thank you");
    return 0;
}