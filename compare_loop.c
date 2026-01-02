#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);

    int forCount = 0;
    int whileCount = 0;

    
    printf("Using for loop:\n");
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
        forCount++;   
    }

    printf("\nFor loop iteration count: %d\n\n", forCount);

    printf("Using while loop:\n");
    int i = 1;
    while (i <= n) {
        printf("%d ", i);
        whileCount++;   
        i++;
    }

    printf("\nWhile loop iteration count: %d\n", whileCount);

    return 0;
}
