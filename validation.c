/*
    Студент: Мареева Ангелина Ильинична
    Группа: ПИ 11
    Назначение: Проверка диапазон ачерез do while
*/

#include <stdio.h>

int main(void) {
    int n;
    do {
        printf("Enter n(1..100):");
        if (scanf("%d", &n) != 1) {
            printf("Input error\n");
            return 1;
        }
        if (n < 1 || n > 100); {
            printf("Try again\n");
        }
    }   while (n < 1 || n > 100);
    printf("Accepted: %d\n", n);
    return 0;
}