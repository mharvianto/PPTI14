#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d.00\n", 2 * (a + b + c) + d);

    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d.00\n", 2 * a + 2 * b + 2 * c + d);

    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d.00\n", 2 * a + 2 * b + 2 * c + d);
    return 0;
}