#include<stdio.h>

int sum(int n);

int main(){
    printf("%d",sum(1234));
}

int sum(int n){
    if(n == 0){
        return 0;
    } else {
        return (n%10)+sum(n/10);
    }
}
