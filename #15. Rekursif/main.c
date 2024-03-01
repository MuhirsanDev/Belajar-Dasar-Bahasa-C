/*

Rekursi adalah teknik di mana suatu fungsi memanggil dirinya sendiri secara berulang untuk menyelesaikan suatu tugas. Dalam konteks bahasa pemrograman C, fungsi rekursif adalah fungsi yang memanggil dirinya sendiri selama proses eksekusi.

Contoh klasik penggunaan rekursi adalah fungsi untuk menghitung faktorial dari suatu bilangan. Faktorial dari suatu bilangan
n (dilambangkan dengan n!) didefinisikan sebagai hasil perkalian dari semua bilangan bulat positif dari 1 hingga n.

Berikut adalah contoh program C yang mengimplementasikan fungsi rekursif untuk menghitung faktorial:

*/

#include <stdio.h>

// Deklarasi fungsi rekursif
int faktorial(int n);

int main()
{
    int n;

    // Meminta pengguna memasukkan nilai untuk dihitung faktorialnya
    printf("Masukkan bilangan untuk dihitung faktorialnya: ");
    scanf("%d", &n);

    // Memanggil fungsi faktorial dan menampilkan hasilnya
    printf("Faktorial dari %d adalah %d\n", n, faktorial(n));

    return 0;
}

// Definisi fungsi rekursif untuk menghitung faktorial
int faktorial(int n)
{
    // Basis kasus: faktorial dari 0 atau 1 adalah 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        // Langkah rekursif: n! = n * (n-1)!
        return n * faktorial(n - 1);
    }
}

/*

    Penjelasan:

    - Fungsi faktorial adalah fungsi rekursif yang mengambil satu parameter bertipe integer n dan mengembalikan nilai bertipe integer yang merupakan faktorial dari n.
    - Dalam fungsi main, pengguna diminta untuk memasukkan bilangan untuk dihitung faktorialnya.
    - Kemudian, fungsi faktorial dipanggil dengan nilai yang dimasukkan oleh pengguna.
    - Dalam fungsi faktorial sendiri, terdapat dua kasus:
    1. Basis kasus: Jika n adalah 0 atau 1, maka hasilnya adalah 1, karena faktorial dari 0 atau 1 adalah 1.
    2. Langkah rekursif: Jika n lebih besar dari 1, maka faktorial dari n adalah n dikalikan dengan faktorial dari (n-1).
    - Proses ini terus berulang secara rekursif sampai mencapai basis kasus, di mana rekursi akan berhenti dan mengembalikan nilai 1.

    Dengan menggunakan rekursi, kita dapat menghitung faktorial dari suatu bilangan dengan mudah dan efisien. Namun, perlu diingat bahwa penggunaan rekursi harus hati-hati karena dapat menyebabkan overhead memori dan waktu eksekusi yang besar jika tidak diimplementasikan dengan benar.

*/