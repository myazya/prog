//
//  main.c
//  laba6

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    //Поменять местами содержимое переменных A и B и вывести новые значения A и B.
    int a = 3;
    int b = 7;
    int c;
    printf("A = %d B = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("A = %d B = %d\n", a, b);
    printf("\n");
    //Даны переменные A, B, C. Изменить их значения, переместив содержимое A в B, B — в C, C — в A, и вывести новые значения переменных A, B, C.
    int v;
    c = 10;
    printf("A = %d B = %d C = %d\n", a, b, c);
    v = b;
    b = a;
    a = c;
    c = v;
    printf("A = %d B = %d C = %d\n", a, b, c);
    printf("\n");
    //3. Даны переменные A, B, C. Изменить их значения, переместив содержимое A в C, C — в B, B — в A, и вывести новые значения переменных A, B, C.
    printf("A = %d B = %d C = %d\n", a, b, c);
    v = c;
    c = a;
    a = b;
    b = v;
    printf("A = %d B = %d C = %d\n", a, b, c);
    printf("\n");
    //4. Найти значение функции y = 3x6 − 6x2 − 7 при данном значении x
    int x = 1;
    int y;
    printf("x = %d\n", x);
    y = 3 * pow(x, 6) - 6 * x * x - 7;
    printf("y = 3*x6 − 6*x2 − 7 = %d\n", y);
    printf("\n");
    //Найти значение функции y = 4(x−3)6 − 7(x−3)3 + 2 при данном значении x
    printf("x = %d\n", x);
    y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
    printf("y = 4*(x−3)6 − 7*(x−3)3 + 2 = %d\n", y);
    printf("\n");
    //Дано число A. Вычислить A8 , используя вспомогательную переменную и три операции умножения
    int k;
    a = 2;
    printf("A = %d\n", a);
    k = a * a; //2
    k = k * k; //4
    k = k * k; //8
    printf("A в 8 степени = %d\n", k);
    printf("\n");
    //7. Дано число A. Вычислить A15, используя две вспомогательные переменные и пять операций умножения.
    int n;
    printf("A = %d\n", a);
    k = a * a; //2
    n = k * a; //3
    n = n * k; //5
    k = n * n; //10
    k = n * k; //15
    printf("A в 15 степени = %d\n", k);
    return 0;
}
