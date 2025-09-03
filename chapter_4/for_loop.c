# include<stdio.h>

int main() {
    for(int i=1; i<=5; i=i+1) {
        printf("Hello world \n");
    }
    return 0;
}

int main() {
    // i = i++; i = i--
    for(int i=10; i>=5; i=i-1) {
        printf("%d \n", i);
    }
    return 0;
}

// i++ = use,then increase (pre increment operator)
// ++i = increase then use (post increment operator)

# include<stdio.h>

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    
    for(int i=0; i<=n; i++) {
        printf("%d\n",i);
    }
    return 0;
}


//! print the sum of integer value of n numbers
# include<stdio.h>

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    
    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum = sum + i; // sum += i
    }
    printf(" sum is %d\n",sum);

    return 0;
}

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    
    for(int i=1; i<=10; i++) {
     printf("%d \n",n*i);
    }

    return 0;
}

int main() {
    for(int i=10; i>=5; i=i-1) {
        if(i ==3 ) {
            break;
        }
        printf("%d \n", i);
    }
    printf("end");
    return 0;
}

int main() {
    for(int i=10; i>=5; i=i-1) {
        if(i == 3 ) {
            continue; // 3 skip
        }
        printf("%d \n", i);
    }
    printf("end");
    return 0;
}