#include <stdio.h>

int main(){
    int jumlah, nominal;
    int total = 0;

    printf("Masukkan jumlah transaksi : ");
    scanf("%d", &jumlah);

    if (jumlah <= 0){
        printf("Tidak ada transaksi hari ini");
    } else {
        printf("Masukkan nominalnya : \n");
        for(int i = 0; i < jumlah; i++){
            scanf("%d", &nominal);
            total += nominal;
        }
        
        printf("Total pengeluaran hari ini adalah %d", total);
    }

    return 0;
}