/* Nama File: HargaDiskon
/* Deskripsi: Menghitung dan menampilkan pada layar harga akhir
              belanjaan setelah dipotong diskon berdasarkan jenis barang
/* Nama: Aghnia Alifya Kamila
/* NIM: 24060121140148
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
//Kamus
    char x;
    int y;
    float z;

//Algoritma
    printf("Masukkan jenis barang : ");
    scanf("%c", &x);
    printf("Masukkan harga awal : ");
    scanf("%d", &y);

    if (200<y<10000){
        switch(x){
        case 'A' :
            z = y*0.9;
            printf("Total harda setelah diskon : %.2f", z);
            break;
        case 'B' :
            z = y*0.85;
            printf("Total harda setelah diskon : %.2f", z);
            break;
        case 'C' :
            printf("Total harda setelah diskon : %.2f", z);
            break;
        default:
            printf("Besaran jenis tidak valid");
        }
    }else{
        printf("Total harda setelah diskon : %d", y);
    }

    return 0;
}
