# include<stdio.h> // pre-processor director
# include<stdio.h>

int main() {
    int day; //1-mon, 2-tue....
    printf("enter day(1-7) : ");
    scanf("%d", &day);

    switch (day) {
        case 1 : printf("monday \n");
            break;
        case 2 : printf("tuesday \n");
            break;
        case 3 : printf("wednesday \n");
            break;
        case 4 : printf("thursday \n");
            break;
        case 5 : printf("friday \n");
            break;
        case 6 : printf("saturday \n");
            break;
        case 7 : printf("sunday \n");
            break;
        default : printf("not a valid day")
    return 0;
}}


int main() {
    int day; //m-mon, t-tue....
    printf("enter day : ");
    scanf("%s", &day);

    switch (day) {
        case 'm' : printf("monday \n");
            break;
        case 't' : printf("tuesday \n");
            break;
        case 'w' : printf("wednesday \n");
            break;
        case 'T' : printf("thursday \n");
            break;
        case 'f' : printf("friday \n");
            break;
        case 's' : printf("saturday \n");
            break;
        case 'S' : printf("sunday \n");
            break;
        default : printf("not a valid day")
    }
    return 0;}