#include <stdio.h>

int main()
{

    /*

    if statement digunakan untuk melakukan percabangan atau pengujian kondisi. Jika kondisi yang ditentukan bernilai benar (true), blok kode di dalamnya akan dieksekusi. Jika tidak, blok kode di dalam else (opsional) akan dieksekusi jika ada, atau program akan melanjutkan ke baris berikutnya setelah if statement.
    Dalam contoh di atas, kita memiliki variabel nilai yang memiliki nilai 75. Kita menggunakan if statement untuk memeriksa apakah nilai tersebut lebih besar dari atau sama dengan 70.
    Jika kondisi nilai >= 70 bernilai benar, maka blok kode di dalam if akan dieksekusi, yang mencetak pesan "Nilai Anda lulus." ke layar.
    Jika kondisi nilai >= 70 bernilai salah, maka blok kode di dalam else akan dieksekusi (jika ada), yang mencetak pesan "Nilai Anda tidak lulus." ke layar.
    Karena nilai nilai adalah 75 (lebih besar dari atau sama dengan 70), maka output dari program tersebut adalah "Nilai Anda lulus."

    */

    int nilai;
    printf("Masukkan nilai Anda: ");
    scanf("%d", &nilai);

    if (nilai >= 85 && nilai <= 100)
    {
        printf("Nilai Anda: A\n");
    }
    else if (nilai >= 70 && nilai < 85)
    {
        printf("Nilai Anda: B\n");
    }
    else if (nilai >= 55 && nilai < 70)
    {
        printf("Nilai Anda: C\n");
    }
    else if (nilai >= 40 && nilai < 55)
    {
        printf("Nilai Anda: D\n");
    }
    else if (nilai >= 0 && nilai < 40)
    {
        printf("Nilai Anda: E (Tidak Lulus)\n");
    }
    else
    {
        printf("Nilai tidak valid.\n");
    }

    return 0;
}
