#include <stdio.h>

int main() {
    int a = 10; 
    int b = 20; 

    int *p1 = &a; // aを指すポインタ
    int *p2 = &b; // bを指すポインタ

    printf("Before change: a = %d, b = %d\n", a, b);

    // ポインタを使用して変数の値を変更
    *p1 = 30; // aの値を30に変更
    *p2 = 40; // bの値を40に変更

    printf(" %d,%d\n", a, b);

    return 0;
}
