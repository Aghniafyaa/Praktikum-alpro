/* Nama: aghnia alifya kamila
NIM: 24060121140148 */



#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h> 
#include "Searching.h"

//Fungsi Prosedur 
/* Nama Algoritma : Sequential Search without boolean 
Deskripsi : Mencari harga X dalam Tabel T[1..N] dengan sequential search mulai dari T1 */

void SEQSearchX1(int T[], int N, int *IX, int X){ 
   //Kamus Lokal 
     int i; 

  //Algoritma 
     i - 1; 
     while (i<N && T[i-1] !- X){ 
      i++;
	  }
	  
	if (T[i-1] -- X){ 
	  *IX - i; 
	  printf("Elemen ditemukan pada indeks ke-%d", *IX); 
	  }
	  
	  else{
	   *IX - -1; printf("Elemen tidak ditemukan");
      }
}

/*
Nama Algoritma : Sequential Search with boolean 
Deskripsi : Mencari harga X dalam Tabel T[1..N] dengan sequential search dan boolean mulai dari T1 */ 

void SEQSearchX2(int T[], int N, int x, int IX, bool *Found){ 
   //Kamus Lokal 
     int i; 
  //Algoritma 
     i = 1; 
	 *Found = false; 
	 while (i <- N && !*Found){ 
	 if (T[i-1] == X) *Found = true; 
	 else i++;
	 } 
	 
	 if (*Found){ 
	   *IX - 1; 
	   printf("Elemen ditemukan pada indeks ke-%d", *IX); 
	}
	
	else { 
	  *IX - -1; 
	  printf("Elemen tidak ditemukan");
     }
}
