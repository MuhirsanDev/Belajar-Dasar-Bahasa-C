#include <stdio.h>

// Deklarasi fungsi untuk menghitung pangkat
double hitungPangkat(double basis, int eksponen);

int main() {
    double basis;
    int eksponen;

    // Meminta pengguna memasukkan nilai basis
    printf("Masukkan nilai basis: ");
    scanf("%lf", &basis);

    // Meminta pengguna memasukkan nilai eksponen (bilangan bulat)
    printf("Masukkan nilai eksponen (bilangan bulat): ");
    scanf("%d", &eksponen);

    // Memanggil fungsi hitungPangkat dan menyimpan hasilnya
    double hasil = hitungPangkat(basis, eksponen);

    // Menampilkan hasil pangkat tanpa desimal
    printf("%.0lf ^ %d = %.0lf\n", basis, eksponen, hasil);

    return 0;
}

// Definisi fungsi untuk menghitung pangkat
double hitungPangkat(double basis, int eksponen) {
    double hasil = 1.0;

    // Jika eksponen adalah 0, hasilnya adalah 1
    if (eksponen == 0) {
        return hasil;
    }

    // Jika eksponen adalah bilangan negatif
    if (eksponen < 0) {
        basis = 1 / basis;
        eksponen = -eksponen;
    }

    // Menghitung pangkat dengan mengalikan basis sebanyak eksponen kali
    for (int i = 0; i < eksponen; i++) {
        hasil *= basis;
    }

    return hasil;
}


    /*
    
    Penjelasan:

    - Program ini meminta pengguna memasukkan nilai basis dan eksponen.
    - Fungsi hitungPangkat digunakan untuk menghitung pangkat dari nilai basis dan eksponen yang diberikan.
    - Fungsi hitungPangkat menggunakan loop for untuk mengalikan basis sebanyak eksponen kali dan menyimpan hasilnya di variabel hasil.
    - Jika eksponen adalah 0, hasilnya langsung dikembalikan sebagai 1.
    - Jika eksponen adalah bilangan negatif, maka nilai basis diubah menjadi kebalikannya dan eksponen diubah menjadi positif sebelum dilakukan perhitungan pangkat.
    - Hasil pangkat kemudian ditampilkan ke layar.


    Dengan menjalankan program ini, Anda dapat menghitung pangkat dari nilai basis yang Anda inginkan dengan eksponen yang diinginkan juga.
    
    */