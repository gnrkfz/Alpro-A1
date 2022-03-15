/* Nama File	  : CekPrima.c */
/* Deskripsi	  : untuk mengetahui sebuah bilangan integer sembarang N (N>0) termasuk
                  bilangan prima atau bukan. */
/* Pembuat	    : Ganar Khatir Faza Zain - 24060121130079 */
/* Tanggal	    : Selasa, 15 Maret 2022 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    // Kamus ---------+
    int N,i,Prime=1;
    
    // Algoritma -----+
    // input
    printf("Masukan bilangan yang ingin di cek apakah prima atau tidak : ");
    scanf("%d", &N);

    // proses
    for(i = 2; i<=sqrt(N); i++){
        if(!(N % i)){
            Prime=0;
        }
    }

    // output
    if(Prime) printf("N = %d adalah bilangan prima", N);
    else printf("N = %d adalah bukan bilangan prima", N);

    return 0;
}
