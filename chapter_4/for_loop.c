# include<stdio.h>
//! print  5 times hello world
int main() {
    for(int i=1; i<=5; i=i+1) {
        printf("Hello world \n");
    }
    return 0;
}

//! print 10 to 1

int main() {
    // i = i++; i = i--
    for(int i=10; i>=1; i=i-1) {
        printf("%d \n", i);
    }
    return 0;
}

// i++ = use,then increase (post increment operator)
// ++i = increase then use (pre increment operator)

//i++ == i=i+1
//i-- == i=i-1
//i+=2 == i=i+2
//i-=2 == i=i-2

//! post and pre increment 

int main() {
    int = 1;
    printf("%d", i++); //1
    printf("%d", i); //2

    printf("%d",++i); //2
    printf("%d",i); //2

}

//! print 0 to n
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


//! print the sum of n numbers
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

//! sum and print number in a single loop
int main(){
    int n;
    scanf("%d",&n);

    int sum  = 0;
    for(int i=1, j=n; i<=n && j>1; i++, j--){
        sum = sum + i;
        printf("%d\n"j);
    }
    printf("sum is %d \n",sum);
}

//! table

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    
    for(int i=1; i<=10; i++) {
     printf("%d \n",n*i);
    }

    return 0;
}
//! break
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

//! continue
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


//! print odd number between 5-50

int main() {
    for(int i=5; i<=50; i++){
        if(i%2 !=0){
            printf("%d\n",i)
        }
    }
    return 0;
}

//! factorial

int main() {
    int n;
    scanf("%d",&n);

        int fact = 1;
    for (i=1; i<=n; i++){
        fact= fact * i;
    }
    printf("final factorial is %d",fact);

    return 0;
}

//! print reverse table

int main(){
    int n;
    scanf("%d",&n);

    for(int i=10; i>=1; i--){
        printf("%d\n", n*i);
    }
    return 0;
}