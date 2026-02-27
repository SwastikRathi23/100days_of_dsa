#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    if(n > 0 && (n & (n - 1)) == 0)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}