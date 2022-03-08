/* Nama File	: cekHari.c */
/* Deskripsi	: menerjemahkan angka ke hari (1 s.d 7) */
/* Pembuat	: Ganar Khatir Faza Zain - 24060121130079 */
/* Tanggal	: Selasa, 8 Maret 2022 */

#include <stdio.h>

int main() {

// Kamus
    int h;

// Algoritma
    printf("Masukan Nomor dari 1 sampai 7 yang ingin diterjemahkan menjadi Hari : ");
    scanf("%d", &h);

    switch(h){
    case 1:
        printf("Hari Pertama adalah Hari Senin");
        break;
    case 2:
        printf("Hari Kedua adalah Hari Selasa");
        break;
    case 3:
        printf("Hari Ketiga adalah Hari Rabu");
        break;
    case 4:
        printf("Hari Keempat adalah Hari Kamis");
        break;
    case 5:
        printf("Hari Kelima adalah Hari Jumat");
        break;
    case 6:
        printf("Hari Keenam adalah Hari Sabtu");
        break;
    case 7:
        printf("Hari Ketujuh adalah Hari Minggu");
        break;

    default:
        printf("Masukan Nomor Hari Tidak Tepat!");
    }

    return 0;
}
