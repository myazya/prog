//
//  main.c
//  201-722_Myaziana_4.1
//
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b;
    int s, p;
    printf("Введите сторону а:\n");
    scanf("%d/n", &a);
    printf("Введите сторону b:\n");
    scanf("%d/n", &b);
    s = a * b;
    p = 2 * (a + b);
    printf("Площадь = %d\n", s);
    printf("Периметр = %d\n", p);
    return 0;
}
