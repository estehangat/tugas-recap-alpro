#include <stdio.h>

int main(){
    int n;
    int jumlah = 0;

    printf("Masukkan jumlah array : ");
    scanf("%d", &n);
    int array[n];

    printf("Masukkan integer :\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    for(int j = 0; j < n; j++){
        jumlah += array[j];
    }

    printf("Hasil penjumlahan seluruh elemen pada array adalah %d", jumlah);

    return 0;
}
