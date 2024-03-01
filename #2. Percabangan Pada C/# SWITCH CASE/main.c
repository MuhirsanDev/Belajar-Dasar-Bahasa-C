#include <stdio.h>

int main()
{
    /*

    switch case adalah struktur kontrol dalam bahasa pemrograman C yang digunakan untuk melakukan seleksi atau pemilihan dari beberapa kemungkinan jalur berdasarkan nilai ekspresi tertentu. Struktur switch case sering digunakan ketika terdapat banyak kondisi atau opsi yang berbeda yang harus dipertimbangkan.

    */

    int nomor_hari;

    printf("Masukkan nomor hari (1-7): ");
    scanf("%d", &nomor_hari);

    switch (nomor_hari)
    {
    case 1:
        printf("Hari ke-1 adalah Minggu.\n");
        break;
    case 2:
        printf("Hari ke-2 adalah Senin.\n");
        break;
    case 3:
        printf("Hari ke-3 adalah Selasa.\n");
        break;
    case 4:
        printf("Hari ke-4 adalah Rabu.\n");
        break;
    case 5:
        printf("Hari ke-5 adalah Kamis.\n");
        break;
    case 6:
        printf("Hari ke-6 adalah Jumat.\n");
        break;
    case 7:
        printf("Hari ke-7 adalah Sabtu.\n");
        break;
    default:
        printf("Nomor hari tidak valid.\n");
    }

    return 0;

    /*

    Penjelasan

    - Program ini meminta pengguna memasukkan nomor hari dalam seminggu menggunakan scanf().
    - Selanjutnya, program menggunakan struktur switch case untuk mengevaluasi nilai nomor_hari.
    - Jika nomor_hari sama dengan 1, program akan mencetak "Hari ke-1 adalah Minggu." dan seterusnya sesuai dengan kondisi yang sesuai.
    - Jika nomor_hari tidak cocok dengan salah satu nilai case, program akan menjalankan blok kode dalam default, yang mencetak "Nomor hari tidak valid." karena nomor yang dimasukkan tidak dalam rentang 1 hingga 7.
    - Setiap blok kode dalam case diakhiri dengan break untuk menghentikan eksekusi dan keluar dari struktur switch case.

    */
}
