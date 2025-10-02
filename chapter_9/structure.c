//! a collection of values of different data types

struct student { //user defined
    int roll;
    float cgpa;
    char name[100];
}

int main () {
    struct student s1;

    s1.roll = 1637;
    s1.cgpa = 2.2;

    strcpy(s1.name, "rahim");

    printf("%s", s1.name);
    
}

// array of structure

struct student {
    int roll;
    float cgpa;
    char name[100];
}

int main () {
    struct student ece[100];

    ece[0].roll = 1637;
    ece[0].cgpa = 2.2;
    strcpy(ece[0].name, "rahim");

    printf("%s", ece[0].name);
    return 0;
    
}

// initialising structure

struct student {
    int roll;
    float cgpa;
    char name[100];
}

int main () {
    struct student s1 = {174, 5.5, "rahim"};
    printf("%d", s1.roll);

    return 0;
}

//pointers to structure

struct student {
    int roll;
    float cgpa;
    char name[100];
}

int main () {
    struct student *ptr = &s1;
    printf("%d", (*ptr).roll); //or
    printf("%d", ptr->roll);

    return 0;
}

//function prototype

struct student {
    int roll;
    float cgpa;
    char name[100];
}

void printInfo(struct student s1);

int main () {
    struct student s1 = {1223, 4.3, "rahim"};
    printInfo(s1);
    return 0;
}

void printInfo(struct student s1) {
        printf("%d", s1.roll);

}

//! typedef = used to create alias(nicknames) for data types

typedef struct student {
    int roll;
    float cgpa;
    char name[100];
} stu;

int main() {
    stu s2;

    s2.roll = 144;
    s2.cgpa = 4.4;
    strcpy(s2.name, "rahim");

    printf("%s", s2.name);
    return 0;
}
