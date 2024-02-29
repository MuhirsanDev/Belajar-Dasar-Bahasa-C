#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Array itu adalah variabel yang dapat menyimpan banyak data dengan tipe data yang sama.

    Karena banyak data disimpan dalam variabel yang sama, tentu harus ada pembeda, yaitu terdapat index dari setiap data yang disimpan

    */

    // Contoh Deklarasi Menggunakan Array Kosong

    int array_kosong[5];

    array_kosong[0] = 1;
    array_kosong[1] = 2;
    array_kosong[2] = 3;
    array_kosong[3] = 4;
    array_kosong[4] = 5;

    for (int i=0; i<5; i++){
        printf("%d\n", array_kosong[i]);
    }


    printf("\n\n\n");


    // Contoh Menyimpan Array Menggunakan Inputan User

    int array [5];

    for (int inputan=0; inputan<5; inputan++){
        printf("Inputkan Angka Ke-%d : ", inputan);
        scanf("\n%d", &array[inputan]);
    }

    printf("\nData array yang sudah diinputkan adalah\n");
    for (int i=0; i<5; i++){
        printf("%d\n", array[i]);
    }



    printf("\n\n\n");



    // Contoh Mendeklarasikan Array Langsung Menggunakan Data

    int Data[5] = {8,9,7,5,4};

    printf("\nData array yang sudah disimpan adalah\n");
    for (int i=0; i<5; i++){
        printf("%d\n", Data[i]);
    }









}
