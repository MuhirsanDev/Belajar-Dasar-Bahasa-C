/*

Faktorial adalah hasil perkalian dari semua bilangan bulat positif yang kurang dari atau sama dengan suatu bilangan bulat tertentu. Faktorial biasanya dilambangkan dengan simbol "!". Misalnya, faktorial dari bilangan bulat positif n, dilambangkan sebagai n!

*/



#include <stdio.h>

// Deklarasi fungsi untuk menghitung faktorial
unsigned long long hitungFaktorial(int n);

int main() {
    int n;

    // Meminta pengguna memasukkan bilangan untuk dihitung faktorialnya
    printf("Masukkan bilangan untuk dihitung faktorialnya: ");
    scanf("%d", &n);

    // Memanggil fungsi hitungFaktorial dan menampilkan hasilnya
    printf("Faktorial dari %d adalah %llu\n", n, hitungFaktorial(n));

    return 0;
}

// Definisi fungsi untuk menghitung faktorial menggunakan rekursi
unsigned long long hitungFaktorial(int n) {
    // Basis kasus: faktorial dari 0 atau 1 adalah 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Langkah rekursif: n! = n * (n-1)!
        return n * hitungFaktorial(n - 1);
    }
}

/*

    Penjelasan:

    - Program ini meminta pengguna memasukkan sebuah bilangan bulat.
    - Fungsi hitungFaktorial digunakan untuk menghitung faktorial dari bilangan yang dimasukkan.
    - Pada fungsi hitungFaktorial, terdapat dua kasus:
    1. Basis kasus: Jika n adalah 0 atau 1, maka faktorialnya adalah 1.
    2. Langkah rekursif: Jika n lebih besar dari 1, maka faktorialnya adalah n dikalikan dengan faktorial dari (n-1).
    - Proses rekursi terus berlanjut sampai mencapai basis kasus, di mana nilai faktorial yang dihasilkan adalah 1.
    - Hasil faktorial kemudian ditampilkan ke layar menggunakan printf.
    
    Dalam program ini, kami menggunakan tipe data unsigned long long untuk menyimpan nilai faktorial. Hal ini dikarenakan faktorial dari bilangan bulat positif yang cukup besar bisa memiliki nilai yang sangat besar, dan unsigned long long mampu menampung nilai yang lebih besar daripada tipe data int.


*/