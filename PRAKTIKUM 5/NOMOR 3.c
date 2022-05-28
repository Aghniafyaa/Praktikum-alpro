#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamis
    int N, T[N], i, sum;

    // Algoritma
    printf("size of array/tabel : ");
    scanf("%d", &N);
    printf("Masukkan data tabel dibawah ini!\n");
    for(i=0; i<N; i++) scanf("%d", &T[i]);

    sum = 0;
    for(i=0; i<N ;i++){
        sum = sum + T[i]*(i+1);
    }
    //t[0] muncul 1x
    //t[1] muncul 2x
    //t[2] muncul 3x
    //artinya t[i]*(i+1)

    printf("Hasil penjumlahan : %d", sum);
    return 0;
}
