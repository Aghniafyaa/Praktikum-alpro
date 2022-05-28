#include <stdio.h>
#include <stdlib.h>

int main(){
    // Kamus
    int N, i, T[N], max, min;

    // Algoritma
    printf("Masukkan banyak jalur lintasan : ");
    scanf("%d", &N);
    for(i=0; i<N; i++){
        printf("\n");
        printf("Masukkan nilai jalur ke- %d : ", i+1);
        scanf("%d", &T[i]);
    }

    max = T[0];
    min = T[0];
    for(i=0; i<N; i++) if(T[i]>max) max = T[i];
    for(i=0; i<N; i++) if(T[i]<min) min = T[i];

    printf("Selisih jalur terbesar dan terkecil : %d", max-min);
    return 0;
}
