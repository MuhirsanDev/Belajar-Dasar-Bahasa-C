#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, hasil;
    printf("Operasi Aritmatika\n\n");
    printf("Masukan nilai pertama : ");
    scanf("%d", &x);
    printf("Masukan nilai kedua : ");
    scanf("%d", &y);

    printf("Operasi Penjumlahan");
    hasil = x + y; // Operasi penjumlahan
    printf("\n%d + %d = %d\n", x, y, hasil);

    printf("Operasi Pengurangan");
    hasil = x - y; // Operasi penurangan
    printf("\n%d - %d = %d\n", x, y, hasil);

    printf("Operasi Perkalian");
    hasil = x * y; // Operasi perkalian
    printf("\n%d x %d = %d\n", x, y, hasil);

    printf("Operasi Pembagian");
    hasil = x / y; // Operasi perkalian
    printf("\n%d / %d = %d\n", x, y, hasil);

    // Modulus adalah sisa pembagian
    printf("Operasi Modulus");
    hasil = x % y; // Operasi Modulus
    printf("\n%d %% %d = %d\n", x, y, hasil);

    return 0;
}