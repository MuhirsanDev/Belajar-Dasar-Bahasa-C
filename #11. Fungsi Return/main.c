/*

Dalam bahasa pemrograman C, fungsi return digunakan untuk mengembalikan nilai dari sebuah fungsi. Ketika sebuah fungsi dipanggil, terkadang nilai yang dihasilkan dari operasi di dalam fungsi tersebut perlu dikirim kembali ke tempat pemanggil fungsi tersebut. Inilah saatnya return digunakan.

*/

#include <stdio.h>

int tambah(int a, int b)
{
    int hasil = a + b;
    return hasil;
}

int main()
{
    int angka1 = 5;
    int angka2 = 3;
    int hasilTambah = tambah(angka1, angka2);
    printf("Hasil penjumlahan: %d\n", hasilTambah);
    return 0;

    /*

    Pada contoh di atas, fungsi tambah mengembalikan hasil penjumlahan dari dua parameter yang diberikan (a dan b). Nilai tersebut kemudian ditangkap oleh variabel hasilTambah dalam fungsi main dan dicetak ke layar.

    */
}
