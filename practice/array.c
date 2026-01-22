//! largest element of an array

# include<stdio.h> // pre-processor director

// int main() {
//     int n,i,arr[100];

//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);

//     }
//     int max = arr[0];
//     for(i=1;i<n;i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     printf("%d",max);
//     return 0;
// }

//! backward
#include<string.h>
int main(){
    char str[100];

    gets(str);

    int len = strlen(str);

    for(int i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}