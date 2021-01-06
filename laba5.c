//
//  main.c
//  laba5
//
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // 1. Найти расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2)
    int x1 = 5, x2 = 3, y1 = 8, y2 = 4;
    float r;
    printf("Координаты точки А (%d, %d), точки В (%d, %d)\n", x1, y1, x2, y2);
    r = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("Расстояние от А до В : %.2f\n", r);
    printf("\n");
    //2. Даны три точки A, B, C на числовой оси. Найти длины отрезков AC и BC и их сумму.
    int a = 5, b = 9, c = 11;
    printf("A = %d B = %d C = %d\n", a, b, c);
    printf("AC = %d BC = %d, AC + BC = %d\n", abs(a - c), abs(b - c), (abs(a - c) + abs(b - c)));
    printf("\n");
    //3. Даны три точки A, B, C на числовой оси. Точка C расположена между точками A и B. Найти произведение длин отрезков AC и BC
    c = 7;
    printf("A = %d B = %d C = %d\n", a, b, c);
    printf("AC = %d BC = %d AC * BC = %d\n", abs(a - c), abs(b - c), (abs(a - c) * abs(b - c)));
    printf("\n");
    //4. Даны координаты двух противоположных вершин прямоугольника:(x1, y1), (x2, y2). Стороны прямоугольника параллельны осям координат. Найти периметр и площадь данного прямоугольника.
    printf("Координаты противоположных вершин (%d, %d) (%d, %d)\n", x1, y1, x2, y2);
    printf("Периметр = %d площадь = %d\n", 2 * (abs(x1 - x2) + abs (y1 - y2)), (abs(x1 - x2) * abs (y1 - y2)));
    printf("\n");
    //5. Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь
    int x3 = 3, y3 = 8, p, s;
    printf("Координаты вершин (%d, %d) (%d, %d) (%d, %d)\n", x1, y1, x2, y2, x3, y3);
    a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    printf("Сторона A = %d Сторона B = %d Сторона C = %d\n", a, b, c);
    p = a + b + c;
    printf("Периметр = %d\n", p);
    p = p/2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Площадь = %d\n", s);
    printf("\n");
    return 0;
}
