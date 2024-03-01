#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Percabangan terjadi karena ada 2 pilihan
    // Contoh
    int nilai;

    printf("Inputkan Nilai : ");
    scanf("%d", &nilai);

    if(nilai > 80 && nilai <= 100){
        printf("\nNilai A");
    }else if(nilai >= 71 && nilai <= 80){
        printf("\nNilai B");
    }else if(nilai >= 61 && nilai <= 70){
        printf("\nNilai C");
    }else{
        printf("\nAnda Tidak Lulus");
    }


    printf("\n\n\n");


    /*
     Nested IF / Percabangan Bersarang

     Studi kasus seleksi pegawai, dengan syarat
     - Pria tinggi minimal 160
     - Wanita tinggi minimal 150

    */

    char jenisKelamin;
    int tinggi;

    printf("Inputkan Jenis Kelamin : ");
    scanf("%c", &jenisKelamin);
    printf("\nInputkan Tinggi : ");
    scanf("%d", &tinggi);

    if (jenisKelamin == 'L'){
        if(tinggi >= 160){
            printf("Selamat Anda Lolos Seleksi");
        }else{
            printf("Mohon Maaf Belum Lolos");
        }
    }else if(jenisKelamin == 'P'){
        if(tinggi >= 155){
            printf("Selamat Anda Lolos Seleksi");
        }else{
            printf("Mohon Maaf Belum Lolos");
        }
    }



    // Percabangan SWITCH CASE
    // Contoh
    int bulanKe;
    printf("Inputkan Bulan Ke Berapa : ");
    scanf("%d", &bulanKe);

    switch(bulanKe){
    case 1:
        printf("\nJanuari");
        break;
    case 2:
        printf("\nFebruari");
        break;
    case 3:
        printf("\nMaret");
        break;
    case 4:
        printf("\nApril");
        break;
    case 5:
        printf("\nMei");
        break;
    case 6:
        printf("\nJuni");
        break;
    case 7:
        printf("\nJuli");
        break;
    case 8:
        printf("\nAgustus");
        break;
    case 9:
        printf("\nSeptember");
        break;
    case 10:
        printf("\nOktober");
        break;
    case 11:
        printf("\nNovember");
        break;
    case 12:
        printf("\nDesember");
        break;

    default:
        printf("Angka Yang Anda Inputkan Salah!");
    }

}
