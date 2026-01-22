# include<stdio.h> // pre-processor director
# include<stdio.h>
//! check adult
int main() {
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("adult \n");
        printf("they can vote \n");
        printf("they can drive \n");
    }
    else if (age > 13 && age < 18){
        printf("not adult \n");
    }
    else {
        printf("child \n");
    }
    printf("thank you");
    return 0;
}