#include <stdio.h>

int main()
{
    /*

    if else adalah salah satu struktur kontrol yang digunakan dalam bahasa pemrograman C untuk membuat keputusan berdasarkan kondisi tertentu. Struktur ini memungkinkan program untuk melakukan percabangan atau pemilihan jalur yang berbeda tergantung pada apakah kondisi yang diberikan bernilai benar (true) atau salah (false).
    Secara umum, if else digunakan dalam situasi di mana ada dua kemungkinan hasil dari suatu kondisi: jika kondisi bernilai benar, maka satu blok kode akan dieksekusi, dan jika kondisi bernilai salah, maka blok kode lainnya akan dieksekusi.
    Sintaks dasar dari if else dalam bahasa C adalah sebagai berikut:

    */

    int nilai;

    printf("Masukkan nilai Anda: ");
    scanf("%d", &nilai);

    if (nilai >= 90)
    {
        printf("Nilai Anda: A\n");
    }
    else if (nilai >= 80)
    {
        printf("Nilai Anda: B\n");
    }
    else if (nilai >= 70)
    {
        printf("Nilai Anda: C\n");
    }
    else if (nilai >= 60)
    {
        printf("Nilai Anda: D\n");
    }
    else
    {
        printf("Nilai Anda: E (Tidak Lulus)\n");
    }

    return 0;
}
