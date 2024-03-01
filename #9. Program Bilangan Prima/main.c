#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    /*

    Bilangan prima adalah bilangan bulat positif yang hanya memiliki dua pembagi positif, yaitu 1 dan dirinya sendiri. Beberapa contoh bilangan prima adalah:

    */

    if (num <= 1)
    {
        return false; // Bilangan negatif atau 1 bukan bilangan prima
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false; // Jika ditemukan pembagi selain 1 dan bilangan itu sendiri, maka bukan bilangan prima
        }
    }
    return true; // Jika tidak ada pembagi selain 1 dan bilangan itu sendiri, maka bilangan prima
}

int main()
{
    int number;
    printf("Masukkan bilangan: ");
    scanf("%d", &number);

    if (isPrime(number))
    {
        printf("%d adalah bilangan prima.\n", number);
    }
    else
    {
        printf("%d bukan bilangan prima.\n", number);
    }

    return 0;

    /*

    Penjelasan:

    - Program ini mendefinisikan sebuah fungsi isPrime yang menerima sebuah bilangan bulat (num) dan mengembalikan true jika bilangan tersebut adalah bilangan prima, dan false jika tidak.
    - Dalam fungsi isPrime, bilangan negatif atau 1 langsung dikembalikan sebagai false karena bukan bilangan prima. Kemudian, dilakukan looping dari i = 2 hingga i * i <= num, dan jika ditemukan pembagi (num % i == 0), maka bilangan tersebut bukan prima dan langsung dikembalikan sebagai false. Jika tidak ada pembagi selain 1 dan bilangan itu sendiri, maka bilangan tersebut adalah prima dan dikembalikan sebagai true.
    - Di dalam fungsi main, pengguna diminta untuk memasukkan sebuah bilangan, kemudian fungsi isPrime dipanggil untuk menentukan apakah bilangan tersebut adalah bilangan prima atau tidak, dan hasilnya dicetak.


    */
}
