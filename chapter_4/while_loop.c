# include<stdio.h>

int main() {
    int i = 1;
    for(i<=5) {
        printf("Hello world \n");
        i++;
    }
    return 0;
}

# include<stdio.h>

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    int i= 0;
    while(i<=n) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}

