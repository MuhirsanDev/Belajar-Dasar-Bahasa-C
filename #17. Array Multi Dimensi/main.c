/*

Array multi-dimensi adalah array yang memiliki dua atau lebih dimensi. Dalam bahasa pemrograman C, array multi-dimensi dapat digunakan untuk menyimpan data dalam bentuk matriks atau tabel yang memiliki baris dan kolom. Setiap elemen dalam array multi-dimensi dapat diakses dengan menggunakan dua atau lebih indeks.

Berikut adalah contoh program yang menggunakan array multi-dimensi untuk menyimpan dan menampilkan matriks:


*/

#include <stdio.h>

int main() {
    // Deklarasi dan inisialisasi matriks 3x3
    int matriks[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Menampilkan matriks
    printf("Matriks:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*

    Penjelasan:

    - Pada contoh di atas, kita mendeklarasikan dan menginisialisasi array multi-dimensi matriks dengan ukuran 3x3.
    - Array matriks memiliki tiga baris dan tiga kolom, sehingga kita dapat mengakses elemen matriks menggunakan dua indeks: satu untuk baris dan satu untuk kolom.
    - Pada bagian yang menampilkan matriks, kita menggunakan dua loop for bersarang untuk mengiterasi melalui setiap elemen matriks. Loop pertama untuk indeks baris (i) dan loop kedua untuk indeks kolom (j).
    - Dalam setiap iterasi, kita mencetak nilai elemen matriks pada posisi baris i dan kolom j.
    - Setelah mencetak setiap elemen dalam satu baris, kita mencetak karakter newline (\n) untuk mengakhiri baris tersebut dan melanjutkan ke baris berikutnya.
    
    Dengan menggunakan array multi-dimensi, kita dapat dengan mudah menyimpan dan mengakses data dalam bentuk matriks atau struktur data lain yang memiliki dua atau lebih dimensi.

*/