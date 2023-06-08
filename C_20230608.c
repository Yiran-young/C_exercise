#include <stdio.h>
#include <string.h>

int main() {
    char input[10];
    while (1) {
        printf("Please enter a command: ");
        scanf("%s", input);
        if (strcmp(input, "1") == 0) {
            printf("hello\n");
        } else if (strcmp(input, "2") == 0) {
            printf("World\n");
        } else if (strcmp(input, "exit") == 0) {
            break;
        }
    }
    return 0;
}
