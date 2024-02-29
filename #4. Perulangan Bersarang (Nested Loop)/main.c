#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Perulangan Bersarang / Nested Loop
    Merupakan sebutan untuk perulangan didalam perulangan, sehingga akan membentuk banyak perulangan yang harus diproses

    Didalam Nested Loop terdapat istilah outer loop dan inner loop.

    */

    // Contoh Study Kasus Membuat Daftar Angka

/*
    int input;

    printf("Inputkan Angka : ");
    scanf("%d", &input);

    for (int i = 1; i <= input; i++){
        for (int a = 1; a <= input; a++){
            printf("%d ", a);
        }
        printf("\n");
    }

*/


    // Contoh
/*
    int input;

    printf("Inputkan Angka : ");
    scanf("%d", &input);

    for (int i = 1; i <= input; i++){
        for (int a = 1; a <= input; a++){
            printf("%d ", i);
        }
        printf("\n");
    }

*/


    // Contoh
/*
    int input;

    printf("Inputkan Angka : ");
    scanf("%d", &input);

    for (int i = 1; i <= input; i++){
        for (int a = 1; a <= input; a++){
            printf("%d\t", i*a);
        }
        printf("\n");
    }

*/


    // Contoh Membuat Daftar Perkalian

    for (int i = 1; i <= 10; i++){
        for (int a = 1; a <= 10; a++){
            printf("%d * %d = %d\n", i,a, i*a);
        }
        printf("\n\n");
    }


}

