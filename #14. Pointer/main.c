
/*

    Pointer adalah variabel yang menyimpan alamat memori suatu variabel. Dalam bahasa C, kita dapat menggunakan pointer untuk mengakses, mengubah, dan mengelola lokasi memori tempat data disimpan. Pointer berguna terutama ketika kita ingin mengakses atau memanipulasi data secara langsung pada level memori.

    Sebagai contoh, jika kita memiliki variabel x dengan nilai 10, kita dapat membuat pointer yang menunjuk ke x, sehingga kita dapat mengakses nilai 10 tersebut melalui pointer tersebut.

    Berikut adalah contoh program sederhana yang menggunakan pointer:

*/

#include <stdio.h>

int main()
{
    int x = 10;
    int *pointerX; // Deklarasi pointer

    // Mengatur pointerX untuk menunjuk ke alamat memori dari x
    pointerX = &x;

    // Menampilkan nilai variabel x menggunakan pointer
    printf("Nilai x: %d\n", *pointerX);

    // Mengubah nilai variabel x melalui pointer
    *pointerX = 20;

    // Menampilkan kembali nilai variabel x
    printf("Nilai x setelah diubah: %d\n", x);

    return 0;
}

/*

    Penjelasan:

    - Kita mendeklarasikan variabel x dengan nilai 10.
    - Kemudian, kita mendeklarasikan pointer pointerX yang akan menunjuk ke alamat memori variabel x. Ini dilakukan dengan menggunakan operator & yang mengambil alamat memori dari variabel x.
    - Menggunakan operator *, kita dapat mengakses nilai yang disimpan pada alamat memori yang ditunjuk oleh pointer. Misalnya, *pointerX menghasilkan nilai dari variabel x.
    - Dalam contoh ini, kita mencetak nilai x menggunakan pointer dengan printf("Nilai x: %d\n", *pointerX);.
    - Kemudian, kita mengubah nilai variabel x melalui pointer dengan *pointerX = 20;.
    - Terakhir, kita mencetak kembali nilai variabel x untuk memverifikasi bahwa nilainya telah berubah.
    
    Perhatikan bahwa kita menggunakan tipe data int * untuk mendeklarasikan pointer, yang menunjukkan bahwa pointer tersebut akan menunjuk ke alamat memori yang menyimpan data bertipe integer.

*/