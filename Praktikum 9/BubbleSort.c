/* Nama File	: BubbleSort.c */
/* Deskripsi	: Algoritma sorting dengan melakukan penukaran data secara terus menerus sampai urut */
/* Pembuat      : Ganar Khatir Faza Zain - 24060121130079 */
/* Tanggal      : Selasa, 19 April 2022 */

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n){
    int i, j, temp;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int i, n;
    n = 10;
    int arr[] = {6,10,3,9,7,6,99,88,91,25};
    bubbleSort(arr, n);
    printf("Sorted Array: \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
