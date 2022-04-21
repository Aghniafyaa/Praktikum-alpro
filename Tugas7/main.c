/* Nama: aghnia alifya kamila
NIM: 24060121140148 */


#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h> 
#include "Searching.h"

 //Fungsi Utama 
 int main(){ 
 //Kamus 
 int B, X, n, i; 
 int IXA; 
 bool found; 
 
 //Algoritma 
 //Input Data yang dibutuhkan printf("Masukkan jumlah data array (harus integer positif): "); 
 scanf ("%d",&B); 
 //Asumsi B pasti integer positif 
 int A[B]; 
 for (1-0;i<B;i++){ 
 printf("Masukkan Elemen ke %d :",i+1); 
 scanf("%d",&A[i]); 
 
 printf("Masukkan nilai data yang ingin dicari : "); 
 scanf("%d",&X); 
 n - sizeof (A)/sizeof (A[0]); 
 printf("-----------------------\n"); 
 printf("Dengan Sequential Search without boolean --> "); 
 SEQSearchX1(A, n, &IXA, X); 
 printf("\n"); 
 printf("Dengan Sequential Search with boolean --> ") 
 SEQSearchX2(A, n, X, &IXA, &found); 
 return 0;
}
