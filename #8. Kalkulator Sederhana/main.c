#include <stdio.h>

int main()
{
    char lanjut;
    do
    {
        char operator;
        double angka1, angka2, hasil;

        printf("Masukkan angka pertama: ");
        scanf("%lf", &angka1);

        printf("Masukkan angka kedua: ");
        scanf("%lf", &angka2);

        printf("Masukkan operator (+, -, *, /): ");
        scanf(" %c", &operator);

        switch (operator)
        {
        case '+':
            hasil = (int)angka1 + (int)angka2;
            break;
        case '-':
            hasil = (int)angka1 - (int)angka2;
            break;
        case '*':
            hasil = (int)angka1 * (int)angka2;
            break;
        case '/':
            hasil = angka1 / angka2;
            break;
        default:
            printf("Operator tidak valid.\n");
            return 1;
        }

        if (operator== '/')
            printf("Hasil dari %.0lf %c %.0lf = %.2lf\n", angka1, operator, angka2, hasil);
        else
            printf("Hasil dari %.0lf %c %.0lf = %.0lf\n", angka1, operator, angka2, hasil);

        printf("Apakah Anda ingin melanjutkan? (Y/N): ");
        scanf(" %c", &lanjut);
    } while (lanjut == 'Y' || lanjut == 'y');

    printf("Terima kasih telah menggunakan kalkulator sederhana.\n");

    return 0;

    /*
    
    Penjelasan Tambahan:

    - Program ini masih menggunakan loop do-while untuk memberi pengguna pilihan untuk melanjutkan menghitung atau tidak.
    - Pada operasi penjumlahan, pengurangan, dan perkalian (case '+', case '-', case '*'), hasilnya diambil sebagai bilangan bulat dengan menggunakan (int)angka1, (int)angka2.
    - Pada operasi pembagian (case '/'), hasilnya diambil dengan dua angka di belakang koma menggunakan %0.2lf.
    - Pengguna masih memiliki pilihan untuk melanjutkan atau tidak setelah hasil operasi ditampilkan.
    - Pesan terima kasih akan ditampilkan di akhir program setelah loop do-while selesai dieksekusi.

    
    */
}
