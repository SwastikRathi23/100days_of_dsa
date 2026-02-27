#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter code name: ");
    scanf("%s", str);

    int length = strlen(str);

    printf("Mirror format: ");

    for(int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}