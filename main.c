//
//  main.c
//  201-722_Myazina_4.5
//
//  Created by MacBook on 07.10.2020.
//
#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x, y;
    float a, b;
    printf("Введите x и y\n");
    scanf("%d %d", &x, &y);
    a = abs(x);
    b = abs(y);
    printf("Сумма: %d\n", abs(x) + abs(y));
    printf("Разность: %d\n", abs(x) - abs(y));
    printf("Произведение: %d\n", abs(x) * abs(y));
    printf("Частное: %.2f\n", a / b);
    return 0;
}
