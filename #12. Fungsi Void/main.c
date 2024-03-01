/*

    Dalam bahasa pemrograman C, void adalah sebuah kata kunci yang digunakan untuk menunjukkan bahwa suatu fungsi tidak mengembalikan nilai apapun. Dengan kata lain, fungsi yang dideklarasikan dengan tipe pengembalian void tidak memiliki nilai balik atau return value.

    Penjelasan singkat tentang fungsi void:

    - Fungsi void digunakan ketika sebuah fungsi tidak perlu mengembalikan nilai kepada pemanggilnya.
    - Tipe pengembalian void digunakan dalam deklarasi fungsi untuk menunjukkan bahwa fungsi tersebut tidak mengembalikan nilai.
    - Dalam definisi fungsi void, tidak ada pernyataan return dengan nilai yang diikuti olehnya.


    Berikut adalah contoh penggunaan fungsi void dalam bahasa C:

*/

#include <stdio.h>

// Deklarasi fungsi void tanpa parameter
void sapa()
{
    printf("Halo, selamat datang!\n");
}

// Deklarasi fungsi void dengan parameter
void cetakPesan(char pesan[])
{
    printf("Pesan: %s\n", pesan);
}

int main()
{
    // Memanggil fungsi sapa()
    sapa();

    // Memanggil fungsi cetakPesan() dengan parameter
    cetakPesan("Ini adalah contoh pesan.");

    return 0;
}

/*

    Pada contoh di atas, kita mendefinisikan dua fungsi void. Fungsi pertama sapa() tidak memiliki parameter dan tidak mengembalikan nilai. Fungsi ini hanya mencetak pesan "Halo, selamat datang!" ke layar.

    Fungsi kedua cetakPesan() memiliki satu parameter bertipe char[] (array karakter) dan tidak mengembalikan nilai. Fungsi ini mencetak pesan yang diberikan melalui parameter ke layar.

    Ketika fungsi-fungsi ini dipanggil dari dalam fungsi main(), mereka hanya menjalankan tugas mereka tanpa mengembalikan nilai apapun. Itulah mengapa tipe pengembalian yang digunakan adalah void.


*/