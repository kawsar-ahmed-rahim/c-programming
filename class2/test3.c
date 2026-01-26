//! take an array of length 5 and then enter a number to check that number is present or  not
# include<stdio.h>

int main(){
    int arr[5],i,number,flag=0;
    printf("enter numbers: ");
    for(i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&number);
    for(i=0; i<5; i++){
        if(number == arr[i]){
            flag = 1;
            break;}}

             if(flag = 1){
            printf("found");
        }
        else{
            printf("not found");
        }
   
    return 0;
}