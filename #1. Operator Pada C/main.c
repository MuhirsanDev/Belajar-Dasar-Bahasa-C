#include <stdio.h>
#include <stdlib.h>

int main()
{
    int e = 10;
    printf("%d", e++); // Mencetak dahulu tidak langsung ditambahkan
    printf("\n%d", e); // Baru akan menambahkan karena nilai a sudah ditambahkan diatas


    printf("\n\n");


    // Operator Relasi (Perbandingan) Menggunakan ==
    // Hasil perbandingan berupa nilai 1(True) atau false(0)

    int f = 10;
    int g = 5;
    int hasilRelasi = f == g; // Apakah 10 sama dengan 5 hasil nya false (0)
    printf("%d", hasilRelasi);


    printf("\n\n");

/*
     Operator Logika
     Operator yang digunakan untuk menangani data boolean
     Berikut adalah tanda operator logika
     End && contoh a&&b bernilai 1 jika a dan b bernilai 1
     Or || contoh a||b bernilai 1 jika a atau b bernilai 1
     Not ! contoh !a bernilai 1 jika a bernilai 0
     Xor ^ contoh a^b bernilai 1 hanya jika salah satu variabel bernilai 1


     Tabel Logika && (AND)
     true and true = true
     true and false = false
     false and true = false
     false and false = false


     Tabel Logika || (OR)
     true or true = true
     true or false = true
     false or true = true
     false or false = false



     Tabel Logika ! (NOT)
     true NOT = false
     false NOT = true



     Tabel Logika ^ (XOR)
     true or true = false
     true or false = true
     false or true = true
     false or false = false

*/

// Contoh
    int a = 1; //true
    int b = 0; //false

    printf("a == %d", a);
    printf("\nb = %d", b);

    printf("\n\na && b == %d", a && b); // Logika AND // false
    printf("\na || b = %d", a || b); // Logika OR // true
    printf("\n!a = %d", !a); // Logika NOT // false
    printf("\na ^ b = %d", a ^ b); // Logika XOR // true




    printf("\n\n");


    // Operator Bitwase
    // Operator yang digunakan untuk operasi bit per bit (biner) pada nilai integer

    // Contoh
    int h = 20;
    int i = 15;

    printf("h & i = %d", h&i); // 10100 & 01111 = 00100 = 4
    printf("\nh | i = %d", h|i);
    printf("\n~h = %d", ~h);
    printf("\nh ^ i = %d", h^i);




    printf("\n\n");




    // Operator Assigment (Penugasan)
    // Merupakan operator yang digunakan untuk memnri nilai pada variabel

    // Contoh
    int j = 5;
    j += 10; // ini contoh pertambahan bisa diganti dengan pengurangan, perkalian, dan pembagian
    printf("%d", j);




    printf("\n\n");




/*
    Operator Tenary
    Yaitu operator yang memiliki 3 symbol operand ...? ...: ...;
    Yang berfungsi untuk percabangan / membuat kondisi

*/

    // Contoh 1
    int k = 10;
    printf("%s", k>5?"Benar":"Salah");

    printf("\n\n");

    // Contoh 2
    int bulakKe = 2;
    printf("%s", bulakKe==1?"Januari":bulakKe==2?"Februari":"Bulan yang lain");


    printf("\n\n");

    // Contoh 3
    int nilaiAngka = 85;

    char nilaiHuruf = nilaiAngka >= 80 && nilaiAngka <= 100? 'A':"X";
    printf("Nilai Angka %d = %c", nilaiAngka, nilaiHuruf);

}

