//
//  main.c
//  laba10
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 1. Даны два целых числа: A, B. Проверить истинность высказывания: «Справедливы неравенства A > 2 и B ≤ 3»
    int a = 7, b = 21;
    printf("A = %d, B = %d\n", a ,b);
    if (a > 2) {
            printf("A > 2 - верно\n");
    } else {
        printf("A > 2 - неверно\n");
    }
    if (b <= 3) {
            printf("B ≤ 3 - верно\n");
    } else {
        printf("B ≤ 3 - неверно\n");
    }
    printf("\n");
    //2. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C».
    int c = 7;
    printf("A = %d, B = %d, C = %d\n", a, b, c);
    if ((a < b ) & (b < c)) {
            printf("Справедливо двойное неравенство A < B < C\n");
    } else {
        printf("Несправедливо двойное неравенство A < B < C\n");
    }
    printf("\n");
    //3. Дано целое положительное число. Проверить истинность высказывания: «Данное число является четным двузначным».
    int k, m = 28;
    printf("целое положительное число: %d\n", m);
    k = m%2;
    //printf("К = %d\n", k);
    if ((k == 0) & (m < 100) & (m > 9)) {
        printf("Данное число является четным двузначным\n");
    } else {
        printf("Данное число не является четным двузначным\n");
    }
    printf("\n");
    //4. Дано трехзначное число. Проверить истинность высказывания: «Цифры данного числа образуют возрастающую или убывающую последовательность».
    m = 431;
    printf("Целое положительное число: %d\n", m);
    a = (int)(m/100);
    b = ((int)(m/10))%10;
    c = m%10;
    if (((a > b) & (b > c)) || ((a < b) & (b < c))) {
        printf("Цифры данного числа образуют возрастающую или убывающую последовательность\n");
    } else {
        printf("Цифры данного числа  не образуют возрастающую или убывающую последовательность\n");
    }
    printf("\n");
    //5. Дано четырехзначное число. Проверить истинность высказывания: «Данное число читается одинаково слева направо и справа налево».
    m = 4324;
    printf("Четырехзначное число: %d\n", m);
    a = (float)(m/100);
    b = (int)((m%100)/10);
    c = m%10;
    b = c*10 + b;
    //printf("A = %d, B = %d\n", a, b);
    if (a == b) {
        printf("Данное число читается одинаково слева направо и справа налево\n");
    } else {
        printf("Данное число не читается одинаково слева направо и справа налево\n");
    }
    printf("\n");
    //6. Даны целые числа a, b, c, являющиеся сторонами некоторого треугольника. Проверить истинность высказывания: «Треугольник со сторонами a, b, c является прямоугольным».
    a = 2;
    b = 1;
    c = 1;
    printf("A = %d, B = %d, C = %d\n", a, b, c);
    if ((a > b) & (a > c)) {
        if (a*a == b*b + c*c) {
            printf("Треугольник со сторонами a, b, c является прямоугольным\n"); }
        else {
            printf("Треугольник со сторонами a, b, c не является прямоугольным\n"); }
    }
    if ((b > a) & (b > c)) {
        if (b*b == a*a + c*c) {
            printf("Треугольник со сторонами a, b, c является прямоугольным\n");}
        else {
            printf("Треугольник со сторонами a, b, c не является прямоугольным\n"); }
    }
    if ((c > a) & (c > b)) {
        if (c*c == a*a + b*b) {
            printf("Треугольник со сторонами a, b, c является прямоугольным\n"); }
         else {
                printf("Треугольник со сторонами a, b, c не является прямоугольным\n"); }
    }
    printf("\n");
    //7. Даны целые числа a, b, c. Проверить истинность высказывания: «Существует треугольник со сторонами a, b, c».
    printf("A = %d, B = %d, C = %d\n", a, b, c);
    if ((a > b + c) & (b > c + a) & (c > b + a)) {
        printf("Существует треугольник со сторонами %d, %d, %d\n", a, b, c);
    } else {
        printf("Не существует треугольник со сторонами %d, %d, %d\n", a, b, c);
    }
    return 0;
}
