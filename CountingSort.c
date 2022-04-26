/* Nama File	: CountingSort.c */
/* Deskripsi	: Algoritma sorting dengan cara menghitung jumlah kemunculan dari setiap
                  data yang berada di dalam array */
/* Pembuat	    : Ganar Khatir Faza Zain - 24060121130079 */
/* Tanggal	    : Selasa, 19 April 2022 */

#include<stdio.h>
#include<stdlib.h>

void counting_sort(int arr1[],int n,int max, int min){
    int count[50]={0},i,j;
    for(i=0;i<n;++i)
        count[arr1[i]-min]=count[arr1[i]-min]+1;
    for(i=0;i<=max-min;++i)
        for(j=1;j<=count[i];++j)
            printf("%d ",i+min);
}

int main(){
    int i, n, *arr, max=0, min=0;
    printf("Masukkan N : ");
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    printf("Masukkan Elemen : \n");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("\n Array sebelum disorting: ");
    for(i = 0; i < n; i++){
        if(arr[i]>max)
            max=arr[i];
        (arr[i]<min)? min=arr[i] : min;
        printf("%d ", arr[i]);
    }
    printf("\n Max: %d\n Min: %d\n ",max,min);
    //printf("\nNilai Max: %d\n", max);

    printf("Array setelah disorting: ");
    counting_sort(arr,n,max, min);
    return 0;
}
