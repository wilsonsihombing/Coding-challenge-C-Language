//Link : https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/in-search-of-samosa-pledge-easy-3/

#include <stdio.h>
 
void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
 
int main() {
    int N, K, angka[1000];
    int pembelian = 0;
 
    // Masukkan jumlah item (N) dan anggaran (K)
    scanf("%d %d", &N, &K);
 
    // Masukkan harga setiap item ke dalam array angka[]
    for (int i = 0; i < N; i++) {
        scanf("%d", &angka[i]);
    }
 
    // Urutkan array angka[] menggunakan QuickSort
    quickSort(angka, 0, N - 1);
 
    // Hitung berapa banyak item yang dapat dibeli dengan anggaran K
    for (int i = 0; i < N; i++) {
        if (K >= angka[i]) {
            K -= angka[i];
            pembelian++;
        } else {
            break; // Jika anggaran tidak mencukupi, hentikan loop
        }
    }
 
    // Cetak jumlah item yang dapat dibeli
    printf("%d", pembelian);
 
    return 0;
}
 
// Implementasi algoritma QuickSort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}
 
// Implementasi fungsi pembantu untuk membagi array
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
 
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
 
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
 
    return (i + 1);
}