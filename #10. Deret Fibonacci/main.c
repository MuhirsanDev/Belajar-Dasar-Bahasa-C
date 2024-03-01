#include <stdio.h>

int main()
{

    /*

    Deret Fibonacci adalah deret bilangan yang diawali dengan dua bilangan 0 dan 1, di mana setiap angka berikutnya dalam deret adalah hasil penjumlahan dari dua angka sebelumnya. Secara formal, deret Fibonacci dapat didefinisikan sebagai berikut:

    F(0) = 0
    F(1) = 1
    F(n) = F(n-1) + F(n-2) untuk n > 1

    Dalam bahasa C, Anda dapat mengimplementasikan deret Fibonacci dengan menggunakan loop atau rekursi. Berikut adalah contoh implementasi deret Fibonacci menggunakan loop:

    */

    int n, i, first = 0, second = 1, next;

    printf("Masukkan jumlah bilangan dalam deret Fibonacci: ");
    scanf("%d", &n);

    printf("Deret Fibonacci: ");
    for (i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            next = i;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    return 0;


    /*
    
    Penjelasan:

    - Program ini meminta pengguna untuk memasukkan jumlah bilangan dalam deret Fibonacci yang ingin ditampilkan.
    - Setelah jumlah bilangan ditentukan, program menggunakan loop for untuk menghasilkan deret Fibonacci.
    - Pada setiap iterasi, variabel next dihitung sebagai penjumlahan dari dua angka sebelumnya (first dan second) atau diatur sesuai dengan nilai awal (0 atau 1) untuk dua angka pertama dalam deret.
    - Variabel first dan second digunakan untuk menyimpan dua angka sebelumnya dalam deret Fibonacci.
    - Deret Fibonacci dicetak sebagai output.
    
    Anda juga dapat mengimplementasikan deret Fibonacci menggunakan rekursi, di mana fungsi rekursif akan memanggil dirinya sendiri untuk menghasilkan angka berikutnya dalam deret. Namun, pendekatan tersebut mungkin memiliki keterbatasan dalam hal kinerja untuk nilai n yang besar karena jumlah panggilan rekursif yang diperlukan.
    
    */
}
