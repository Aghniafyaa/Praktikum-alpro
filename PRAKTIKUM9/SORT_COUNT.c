//Header file
#include <stdio.h>
#include <stdlib.h>

//Fungsi Prosedur Counting
void CountingSort(int T[], int N){
    //Kamus Lokal
    int i, j, sum, idx;

    //Algoritma
    for(i = 0; i < (N-1); i++){
        idx = i;
        for(j = i+1; j < N; j++){
            if(T[j] < T[idx]){
                idx = j;
            }
        }
        sum = T[i];
        T[i] = T[idx];
        T[idx] = sum;
    }
}

//Fungti Utama
int main(){
    //Kamus
    int N, i;

    //Algoritma
    printf("Masukkan jumlah banyak data: ");
    scanf("%d", &N); //Asumsi N pasti integer positif
    int T[N];
    printf("Masukkan %d elemen :\n", N);
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }

    CountingSort(T, N);
    printf("Hasil sorting dengan count algorithm :\n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}
