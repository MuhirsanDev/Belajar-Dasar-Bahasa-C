#include <stdio.h>

int main()
{
    /*

    while loop adalah salah satu jenis struktur pengulangan (looping) dalam bahasa C yang digunakan untuk mengeksekusi blok kode secara berulang selama kondisi yang ditentukan bernilai benar (true). Looping ini akan terus berlanjut selama kondisi yang diberikan masih terpenuhi.

    */

    int total = 0;
    int bilangan;

    printf("Masukkan bilangan bulat positif (atau 0 untuk berhenti): ");
    scanf("%d", &bilangan);

    while (bilangan > 0)
    {
        total += bilangan; // Menambahkan bilangan ke total
        printf("Masukkan bilangan bulat positif (atau 0 untuk berhenti): ");
        scanf("%d", &bilangan);
    }

    printf("Total dari semua bilangan yang dimasukkan adalah: %d\n", total);

    return 0;
}
