#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int choice;
    printf("Выбор программы\n");
    do {
        printf("1) r1\n2) r2\n3) r3\n");
        scanf("%d", &choice);
        switch (choice) {
        case 1: system("./r1"); break;
        case 2: system("./r2"); break;
        case 3: system("./r3"); break;
        default: printf("Неверный ввод\n"); break;
        }
    } while (!(choice >= 1 && choice <= 3));
    return 0;
}