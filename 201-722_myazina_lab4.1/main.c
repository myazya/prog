#include <stdio.h>

int main() {
    int a;
    int b;
    int s;
    int p;
    printf("Введите длину сторону a\n");
    scanf("%d", &a);
    printf("Введите длину сторону b\n");
    scanf("%d", &b);
    s = a * b;
    p = 2 * ( a + b);
    printf("Площадь = %d\n", s);
    printf("Периметр = %d\n", p);
    return 0;
}
