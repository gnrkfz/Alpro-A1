/* Nama File	: FaktorBil.c */
/* Deskripsi	: untuk menentukan faktor-faktor bilangan dari bilangan integer sembarang
                  N (N > 0) */
/* Pembuat	    : Ganar Khatir Faza Zain - 24060121130079 */
/* Tanggal	    : Selasa, 15 Maret 2022 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Kamus ---------+
    int N,i;

    // Algoritma -----+
    // input
    printf("Masukan Bilangan yang ingin dicari Faktor nya : ");
    scanf("%d",&N);

    // proses
    for(i=1; i<=N ;i++){
        if (N % i == 0){
            printf(" %d",i);
        }
    }

    return 0;
}