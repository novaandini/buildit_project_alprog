#include <stdio.h>

int main() {
    int a, b, c = 0, i;
    scanf("%d", &a);

    scanf("%d", &b);

    for (i = a; i <= b; i++)
    {
        c += i;
    }
    printf("%d", c);
    return 0;
}