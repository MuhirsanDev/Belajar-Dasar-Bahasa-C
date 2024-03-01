#include <stdio.h>

int main()
{

    /*

    for loop adalah struktur pengulangan (looping) dalam bahasa C yang digunakan untuk mengeksekusi blok kode secara berulang berdasarkan jumlah iterasi yang ditentukan. Struktur ini lebih sering digunakan ketika jumlah iterasi atau pengulangan sudah diketahui sebelumnya.

    */

    int i;

    // Looping dari 1 sampai 5
    for (i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;

    /*

    Penjelasan Contoh:

    - Program di atas menggunakan for loop untuk mencetak angka dari 1 hingga 5.
    - Variabel i digunakan sebagai variabel penghitung. Dimulai dari nilai 1 (i = 1), loop akan dieksekusi selama i kurang dari atau sama dengan 5 (i <= 5), dan nilai i akan bertambah satu setiap kali iterasi selesai dieksekusi (i++).
    - Blok kode di dalam for loop akan mencetak nilai variabel i pada setiap iterasi.
    - Dengan menggunakan for loop, program dapat melakukan pengulangan dengan jumlah iterasi yang sudah diketahui sebelumnya dengan cara yang lebih ringkas dan terstruktur.

    */
}
