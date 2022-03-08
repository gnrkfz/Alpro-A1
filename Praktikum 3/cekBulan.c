/* Nama File	: cekBulan.c */
/* Deskripsi	: menerjemahkan angka ke bulan (1 s.d 12) */
/* Pembuat	: Ganar Khatir Faza Zain - 24060121130079 */
/* Tanggal	: Selasa, 8 Maret 2022 */

#include <stdio.h>

int main() {

// Kamus
    int b;

// Algoritma
    printf("Masukan Nomor dari 1 sampai 12 yang ingin diterjemahkan menjadi Bulan : ");
    scanf("%d", &b);

    switch(b){
    case 1:
        printf("Bulan Pertama adalah Bulan Januari");
        break;
    case 2:
        printf("Bulan Kedua adalah Bulan Februari");
        break;
    case 3:
        printf("Bulan Ketiga adalah Bulan Maret");
        break;
    case 4:
        printf("Bulan Keempat adalah Bulan April");
        break;
    case 5:
        printf("Bulan Kelima adalah Bulan Mei");
        break;
    case 6:
        printf("Bulan Keenam adalah Bulan Juni");
        break;
    case 7:
        printf("Bulan Ketujuh adalah Bulan Juli");
        break;
    case 8:
        printf("Bulan Kedelapan adalah Bulan Agustus");
        break;
    case 9:
        printf("Bulan Kesembilan adalah Bulan September");
        break;
    case 10:
        printf("Bulan Kesepuluh adalah Bulan Oktober");
        break;
    case 11:
        printf("Bulan Kesebelas adalah Bulan November");
        break;
    case 12:
        printf("Bulan Keduabelas adalah Bulan Desember");
        break;

    default:
        printf("Masukan Nomor Bulan Tidak Tepat!");
    }

    return 0;
}
