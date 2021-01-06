//
//  main.c
//  laba4
//
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    //1. Даны стороны прямоугольника a и b. Найти его площадь S = a·b и периметр P = 2·(a + b).
    int a = 4, b = 6;
    printf("A = %d B = %d\n", a, b);
    printf("S = %d P = %d\n", a * b, 2 * (a + b) );
    printf("\n");
    //2. Дан диаметр окружности d. Найти ее длину L = π·d. В качестве значения π использовать 3.14.
    int d = 8;
    float pi = 3.14;
    printf("D = %d\n", d);
    printf("Длина L = %.2f\n", pi * d);
    printf("\n");
    //3. Даны два числа a и b. Найти их среднее арифметическое: (a + b)/2.
    float m;
    m = (a + b)/2;
    printf("A = %d B = %d\n", a, b);
    printf("Их среднее арифметическое: %.2f\n", m);
    printf("\n");
    //4. Даны два ненулевых числа. Найти сумму, разность, произведение и частное их квадратов.
    int x = 2, y = 4;
    float n;
    printf("X = %d Y = %d\n", x, y);
    n = pow(x, 2)/pow(y, 2);
    printf("Квадраты: %.0f %.0f\n", pow(x, 2), pow(y, 2));
    printf("Сумма: %.0f\n", pow(x, 2) + pow(y, 2));
    printf("Разность: %.0f\n", pow(x, 2) - pow(y, 2));
    printf("Произведение: %.0f\n", pow(x, 2) * pow(y, 2));
    printf("Частное: %.2f\n", n);
    printf("\n");
    //5. Даны два ненулевых числа. Найти сумму, разность, произведение и частное их модулей.
    float k, l;
    x = 2;
    y = -4;
    printf("X = %d Y = %d\n", x, y);
    k = abs(x);
    l = abs(y);
    printf("Сумма: %d\n", abs(x) + abs(y));
    printf("Разность: %d\n", abs(x) - abs(y));
    printf("Произведение: %d\n", abs(x) * abs(y));
    printf("Частное: %.2f\n", k / l);
    printf("\n");
    return 0;
}
