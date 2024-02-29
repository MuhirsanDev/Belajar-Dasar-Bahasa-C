#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
     Perulangan Atau Loop
     Adalah struktur program yang akan mengulangi statment atau perintah lebih dari satu selama kondisi bernilai benar,
     dan akan berhenti apabila kondisi bernilai salah

     ada 3 cara melakukan perulangan di C
     - for
     - while
     - do-while
    */


    // Perulangan FOR digunakan untuk mengeksekusi program jika sudah diketahui nilai awal dan batas akhir dari perulangan
    for (int i = 1; i <= 10; i++){
        printf("%d ", i);
    }

    printf("\n\n\n");

    for (char i = 'A'; i <= 'Z'; i++){
        printf("%c ", i);
    }

    printf("\n\n\n");


    // Perulangan WHILE akan dieksekusi jika memenuhi kondisi yang sesuai
    int a = 1;
    while (a <= 10){
        printf("%d ", a);
        a++;
    }


    printf("\n\n\n");



    // Perulangan DO-WHILE sifatnya sama seperti while, tetapi pada perulangan do-while statment minimal akan dieksekusi sekali, baru kemudian dilakukan pengecekan kondisi
    int b =1;
    do{
        printf("%d ", b);
        b++;
    }while(b<=10);


    printf("\n\n\n");


    // Contoh
    char input = 'y';

    while(input == 'y'){
        printf("Apakah anda ingin mengulangi proses? (y/t): ");
        scanf(" %c", &input);
    }
    printf("\n\nPerulangan telah berhenti! Terima Kasih!");


    printf("\n\n\n");


    // Contoh menggunakan Break
    for(int k = 1; k <= 100; k++){
        if(k == 10){
            break;
        }
        printf("%d", k);
    }



    printf("\n\n\n");


    // Contoh menggunakan Continue
    for(int i = 1; i <= 10; i++){
        if(i == 7){
            continue;
        }
        printf("%d", i);
    }




}
