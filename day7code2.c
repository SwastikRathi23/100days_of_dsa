#include <stdio.h>

int main() {
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("F(%d) = 0\n", n);
        return 0;
    }

    if(n == 1) {
        printf("F(%d) = 1\n", n);
        return 0;
    }

    int prev2 = 0;
    int prev1 = 1;
    int current;

    for(int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    printf("F(%d) = %d\n", n, current);

    return 0;
}