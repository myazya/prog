//
//  main.c
//  laba11
//
//
#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 1. Даны две переменные целого типа: A и B. Если их значения не равны, то присвоить каждой переменной большее из этих значений, а если равны, то присвоить переменным нулевые значения. Вывести новые значения переменных A и B.
    int a, b;
    printf("Введите a:\n");
    scanf("%d", &a);
    printf("Введите b:\n");
    scanf("%d", &b);
    if ( a == b ) {
        a = 0;
        b = 0;
    } else {
        if (a > b) {
            b = a;
        } else {
            a = b;
        }
    }
    printf("a = %d, b = %d\n", a, b);
    printf("\n");
    //2. Даны три числа. Найти сумму двух наибольших из них
    int c;
    a = 6;
    b = 7;
    c = 4;
    printf("A = %d, B = %d, C = %d\n", a, b, c);
    if ((a > b) & (a > c)) {
        if (b > c) {
            printf("A + B = %d\n", a + b);
        }
        else printf("A + C = %d\n", a + c);
    } else if ((b > a) & (b > c)) {
        if (a > c) {
            printf("B + A = %d\n", a + b);
        } else printf("B + C = %d\n", c + b);
    } else
        if (a > b) {
        printf("C + A = %d\n", a + c);
        } else  printf("C + B = %d\n", a + b);
    printf("\n");
    // 3. На плоскости расположены три точки: A, B, C. Определить, какая из двух последних точек (B или C) расположена ближе к A, и вывести эту точку и ее расстояние от точки A.
    int m, n;
    printf("A = %d, B = %d, C = %d\n", a, b, c);
    m = abs(a - b);
    n = abs(a - c);
    if (n > m) {
        printf("B %d\n", m);
    } else printf("C %d\n", n);
    printf("\n");
    //4. Даны координаты точки, не лежащей на координатных осях OX и OY. Определить номер координатной четверти, в которой находится данная точка
    int x = 7, y = -3;
    printf("X = %d, Y = %d\n", x, y);
    if ((x > 0) & (y > 0)) {
        printf("Номер координатной четверти: 1\n");
    }
    if ((x < 0) & (y > 0)) {
        printf("Номер координатной четверти: 2\n");
    }
    if ((x < 0) & (y < 0)) {
        printf("Номер координатной четверти: 3\n");
    }
    if ((x > 0) & (y < 0)) {
        printf("Номер координатной четверти: 4\n");
    }
    printf("\n");
    //5. Дано целое число. Вывести его строку-описание вида «отрицательное четное число», «нулевое число», «положительное нечетное число» и т. д.
    int l;
    printf("Введите число\n");
    scanf ("%d", &l);
    if (l == 0) {
        printf("Нулевое число\n");
    } else {
    if (l > 0) {
        printf("Положительное ");
    } else printf("Отрицательное ");
    if ((l%2) == 0) {
        printf("чётное число\n");
    } else printf("нечётное число\n");
    }
    printf("\n");
    //6. Дано целое число, лежащее в диапазоне 1–999. Вывести его строкуописание вида «четное двузначное число», «нечетное трехзначное число» и т. д.
    int h;
    printf("Введите число\n");
    scanf ("%d", &h);
    if (h == 0) {
        printf("Нулевое число\n");
    } else {
    if ((h%2) == 0) {
        printf("Чётное ");
    } else printf("Нечётное ");
    if ((h > 0) & (h < 10)) {
        printf("однозначное число\n");
    } else if ((h > 9) & (h < 100)) {
        printf("двузначное число\n");
    } else if ((h > 99) & (h < 1000)) {
        printf("трехзначное число\n");
    }
}
    printf("\n");
    return 0;
}
