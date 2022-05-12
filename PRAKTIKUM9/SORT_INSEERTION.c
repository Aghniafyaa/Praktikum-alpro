//Header file
#include <stdio.h>
#include <stdlib.h>

// Fungsi Prosedur Insertion
void InsertionSort(int T[], int N){
    //Kamus Lokal
    int i, j, sum;

    //Algoritma
    for (i = 1; i < N; i++) {
        sum = T[i];
        j = i - 1;
        while (j >= 0 && T[j] > sum) {
            T[j + 1] = T[j];
            j-- ;
        }
        T[j + 1] = sum;
    }
}

//Fungsi Utama
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

    InsertionSort(T, N);
    printf("Hasil sorting dengan insertion algorithm :\n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}
