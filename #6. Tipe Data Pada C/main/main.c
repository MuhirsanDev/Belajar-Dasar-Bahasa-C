#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Tipe data INTEGER adalah tipe data yang memiliki nilai berupa angka (bilagan bulat)
    // Cara mencetaknya dengan %d
    int x;
    x = 10;
    printf("%d", x);


    printf("\n\n");


    // Tipe data FLOAT adalah tipe data yang memiliki data berupa angka (angka desimal)
    // Cara mencetaknya dengan %f
    float y;
    y = 10.5;
    printf("%.1f", y); // Memberitahukan bahwa ada 1 angka di belakang koma



    printf("\n\n");


    // Tipe data CHAR adalah tipe data yang berupa karakter
    // Cara mencetaknya dengan %c

    char z; // Hanya menampilkan 1 huruf atau karakter
    z = 'A'; // Menetapkan karakter tunggal 'A' ke z
    printf("%c", z); // Menampilkan karakter 'A'


    printf("\n\n");


    // Contoh menampilkan pesan menggunakan CHAR
    char o[] = "Apa Kabar Kamu ? "; // Menetapkan string "Apa" ke z
    printf("%s", o); // Menampilkan string "Apa"




    return 0;

}
