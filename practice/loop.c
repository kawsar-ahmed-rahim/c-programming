# include<stdio.h>

//!print(1-10)

// int main() {
//     int i;
//     for(i=1;i<=10;i++){
//         printf("%d\n",i);
//     }
//     return 0;
// }

//! add

// int main() {
//     int i,j,k;

//     for (i=0,j=0,k=0; i<4,j<8,k<10; i++){
//         printf("%d %d %d\n", i,j,k);
//         j+=2;
//         k+=3;
//     }
//     return 0;
// }

//! add

// int main() {
//     int a,b,c;
//     for(a=0,b=12,c=23;a<2;a++){
//         printf("%d\n",a+b+c);
//     }
//     return 0;
// }

//!test

// int main(){
//     int i = 0, j=2;
//     for(i=0; i<5; i++,j+=2){
//         printf("%d %d\n",i,j);
//     }
//     return 0;
// }


//! sum of every digit

// int main(){
//     int num,rem,sum=0;
//     scanf("%d",&num);

//     while(num!=0){
//         rem = num%10;
//         sum = sum + rem;
//         num = num/10;
//     }
//     printf("%d",sum);
//     return 0;

// }

//! prime number

// int main() {
//     int num,count;
//     scanf("%d",&num);

//     for(int i = 1;i<=num;i++){
//         if(num%i == 0){
//           count++;
//         }
//     }
//     if(count == 2){
//         printf("prime");
//     } else {
//         printf("not prime");
//     }
    
    
//     return 0;
// }

//! prime number

// int main(){
//     int num;
//     scanf("%d",&num);
//     int flag = 0;

//     for(int i = 2;i<=num/2;i++){
//         flag = 1;
//         break;
//     }
//     if(flag == 0){
//         printf(" prime");
//     } else {
//         printf("not prime");
//     }
//     return 0;
// }

//! table

// int main(){
//     int n,i,res;
//     scanf("%d",&n);

//     for(i = 1;i<=10;i++){
//         res = n*i;
//         printf("%d\n",res);
//     }
//     return 0;
// }

//!factorial
// int main(){
//     int fac=1,n,res;
//     scanf("%d",&n);

//     for(int i = 1;i<=n;i++){
//        res = fac*=i;
//     }
//     printf("%d\n",res);
//     return 0;
//}

//! 1
//! 2 3
//! 4 5 6
//! 7 8 9 10

// int main(){
//     int n=1,i,j;
//     for(i = 1;i<=4;i++){
//         for(j=1;j<=i;j++){
//             printf("%d ",n++);
//         }
//         printf("\n");
//     }
//             return 0;

// }

//!while loop
// int main(){
//     int val = 1;
//     do{
//         val++;
//         ++val;

//     }while(val++>25);
//     printf("%d\n",val);
//     return 0;
// }

//!   *
//!  ***
//! *****

int main(){
    int i,j,k;
    for(i=1;i<=3;i++){
        for(j=1;j<=3-i;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

