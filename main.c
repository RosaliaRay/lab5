/*
    Студент: Мареева Ангелина Ильинична
    Группа: ПИ 11
    Назначение: полный листинг и проверка суммы
*/

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter n (1..100):");
    if (scanf("%d", &n) != 1) {
        printf("Input error\n");
        return 1;
    }
    if (n < 1 || n > 100) {
        printf("Range error\n");
        return 1; 
    }
    long long sum  = 0;
    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("Sum = %lld\n", sum);
    return 0; 
}
