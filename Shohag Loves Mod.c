#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            printf("%d ", i * 2 + 1);
        }
        printf("\n");
    }
    return 0;
}
