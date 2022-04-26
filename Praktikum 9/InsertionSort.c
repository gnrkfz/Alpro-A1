/* Nama File	: SelectionSort.c */
/* Deskripsi	: Algoritma sorting dengan menyisipkan elemen data ke posisi yang tepat */
/* Pembuat      : Ganar Khatir Faza Zain - 24060121130079 */
/* Tanggal      : 26 April 2022 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int arr[] = {6,10,3,9,7,6,99,88,91,25};
    int n = 10;
    int i, j, temp;

    for(i=1;i<n;i++){
        temp = arr[i];
        j = i-1;
        while(j>=0&&arr[j]>temp){
            arr[j+1]=arr[j];
            j = j-1;
        }
        arr[j+1]=temp;
    }

    printf("Array sebelum di Sort : \n");
    printf("6 10 3 9 7 6 99 88 91 25 \n");
    printf("Sorted Array : \n");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
