/* Nama File: BiayaParkir
/* Deskripsi: Menghitung dan menampilkan pada layar total
              akhir biaya parkir berdasarkan lama parkir
/* Nama: Aghnia Alifya Kamila
/* NIM: 24060121140148
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
//Kamus
    int x, y;

//Algoritma
    printf("Masukkan lama parkir : ");
    scanf("%d", &x);


//Dengan asumsi bahwa lama parkir pasti bilangan integer positif
    if (x==1||x==2){
        y = 2000;
    }else{
        y = (2000+(500*(y-2)));
    }
    printf("Biaya parkir : %d", y);
    return 0;
}
