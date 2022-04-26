/* Nama File	: SelectionSort.c */
/* Deskripsi	: Algoritma sorting dengan memilih nilai maks dan min dalam array dan mengurutkannya */
/* Pembuat	    : Ganar Khatir Faza Zain - 24060121130079 */
/* Tanggal	    : 26 April 2022 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int arr[] = {6,10,3,9,7,6,99,88,91,25};
    int n = 10;
    int i, j, min, temp;

    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    
    printf("Array sebelum di Sort : \n");
    printf("6 10 3 9 7 6 99 88 91 25 \n");
    printf("Sorted Array : \n");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}