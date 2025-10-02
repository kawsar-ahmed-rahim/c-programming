struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
}

void printAdd(struct address add);


int main () {
    struct address adds[5];
    //input
    printf("enter info : "); 
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printAdd(adds[0]);


    return 0;
}

void printAdd(struct address add) {
    printf("%d, %d, %s, %s", add.houseNo, add.city, add.block, add.state)
}
