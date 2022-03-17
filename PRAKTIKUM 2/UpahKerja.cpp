/* Nama File: UpahKerja
/* Deskripsi: Menghitung dan menampilkan pada layar total upah kerja yang
              didapat berdasarkan input golongan dan banyak jam kerja
/* Nama: Aghnia Alifya Kamila
/* NIM: 24060121140148
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
//Kamus
    int a, b, c, x;

//Algoritma
    printf("Masukkan golongan : ");
    scanf("%d", &a);
    printf("Masukkan nilai upah: ");
    scanf("%d", &c);

    switch(a){
    case 1 :
        b = 1000;
        break;
    case 2 :
        b = 1500;
        break;
    case 3 :
        b = 2000;
        break;
    case 4 :
        b = 2500;
        break;
    default :
        printf("Golongan tidak valid");
    }

    if (c<40){
        x = c*b;
    }else{
        x = (40*b+(c-40)*(b*1.5));
    }
    printf("\nTotal upah kerja : %d", x);
    return 0;
}
