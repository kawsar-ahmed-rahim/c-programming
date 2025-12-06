#include<stdio.h>

//!1 2 3 4 5
//!1 2 3 4 5
//!1 2 3 4 5
//!1 2 3 4 5
//!1 2 3 4 5

// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//! *
//! * * 
//! * * *
//! * * * *
//! * * * * *

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;

// }


//!1
//!1 2
//!1 2 3
//!1 2 3 4
//!1 2 3 4 5

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;

// }

//! A
//! A B
//! A B C
//! A B C D
//! A B C D E


// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             printf("%c ",'A'+j-1);
//         }
//         printf("\n");
//     }
//     return 0;

// }

//!         *
//!       * * 
//!     * * *
//!   * * * *
//! * * * * *

int main(){
    for(int i=1;i<=5;i++){
        for(int k=1;k<=((5-i)*2);k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;

}