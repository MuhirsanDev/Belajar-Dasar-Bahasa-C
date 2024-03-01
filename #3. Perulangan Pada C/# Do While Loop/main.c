#include <stdio.h>

int main()
{

    /*

    do-while loop adalah salah satu jenis struktur pengulangan (looping) dalam bahasa C yang mirip dengan while loop, namun perbedaannya terletak pada urutan evaluasi kondisi. Pada do-while loop, blok kode di dalamnya akan dieksekusi setidaknya satu kali sebelum kondisi diuji, sedangkan pada while loop, kondisi dievaluasi sebelum blok kode dieksekusi.

    */

    int total = 0;
    int bilangan;

    do
    {
        printf("Masukkan bilangan bulat positif (atau 0 untuk berhenti): ");
        scanf("%d", &bilangan);
        total += bilangan; // Menambahkan bilangan ke total
    } while (bilangan > 0);

    printf("Total dari semua bilangan yang dimasukkan adalah: %d\n", total);

    return 0;

    /*

    Penjelasan Contoh:

    - Program di atas memiliki fungsi yang sama dengan contoh while loop sebelumnya, yaitu meminta pengguna memasukkan bilangan bulat positif dan kemudian mencetak total dari semua bilangan yang dimasukkan sebelumnya. Namun, kali ini kita menggunakan do-while loop.
    - Berbeda dengan while loop, pada do-while loop, blok kode di dalamnya akan dieksekusi setidaknya satu kali sebelum kondisi diuji. Oleh karena itu, pada contoh ini, pengguna akan diminta memasukkan bilangan pertama kali tanpa memeriksa kondisi.
    - Setelah pengguna memasukkan angka, bilangan tersebut ditambahkan ke total.
    - Setelah itu, kondisi while (bilangan > 0) dievaluasi. Jika kondisi tersebut bernilai benar (true), blok kode di dalam do-while loop akan dieksekusi lagi dan pengguna akan diminta untuk memasukkan bilangan lainnya. Jika kondisi tersebut bernilai salah (false), eksekusi program akan melanjutkan ke baris kode setelah blok do-while.
    - Program akan terus meminta pengguna memasukkan bilangan sampai pengguna memasukkan angka 0.

    Dengan menggunakan do-while loop, blok kode di dalamnya akan dieksekusi setidaknya satu kali, sehingga cocok digunakan dalam situasi di mana Anda ingin memastikan bahwa blok kode tersebut dieksekusi minimal sekali bahkan jika kondisi awalnya tidak terpenuhi.

    */
}
