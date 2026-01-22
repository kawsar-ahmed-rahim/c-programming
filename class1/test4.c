//! take an string then remove the duplicate alphabet from the string
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int visited[256] = {0};
    int i;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (!visited[str[i]]) {
            printf("%c", str[i]);
            visited[str[i]] = 1;
        }
    }
    return 0;
}
