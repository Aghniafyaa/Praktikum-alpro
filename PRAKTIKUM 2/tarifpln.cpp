/* Nama File: TarifPLN
/* Deskripsi: Menghitung dan menampilkan pada layar biaya tarif listrik
              berdasarkan golongan dan pemakaian daya listrik
/* Nama: Aghnia Alifya Kamila
/* NIM: 24060121140148
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamus
    int x, y, z;

    //Algoritma
    printf("Masukkan golongan tarif : ");
    scanf("%d", &x);
    printf("Masukkan pemakaian daya listrik : ");
    scanf("%d", &y);

    // Dengan asumsi input x pasti 1 atau 2
    // dan pemakaian daya pasti integer positif
    if (y<100){
        z = x*1000*100;
    }else if (y>=1000){
        z = x*1000*y*1.1;
    }else{
        z = x*1000*y*1;
    }
    printf("Total tarif listrik yang dikenakan : %d", z);
    return 0;
}
