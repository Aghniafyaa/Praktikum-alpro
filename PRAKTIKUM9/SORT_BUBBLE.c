//Header file
#include <stdio.h>
#include <stdlib.h>

//Fungsi Prosedur Bubble
void bubbleSort(int arr[], int N){
    //Kamus Lokal
    int i, j, sum;

    //Algoritma
    for(i = 0; i < N; i++){
        for(j=0; j < N-i-1; j ++){
            if(arr[j] > arr[j+1]){
                sum = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = sum;
            }
        }
    }
}


//Fungsi Utama
int main(){
    //Kamus
    int N, i, j;

    //Algoritma
    printf("Masukkan jumlah banyak data: ");
    scanf("%d", &N); //Asumsi N pasti integer positif
    int T[N];
    printf("Masukkan %d elemen :\n", N);
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }

    bubbleSort(T, N);
    printf("Hasil sorting dengan bubble algorithm :\n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
      }
    printf("\n");
}


