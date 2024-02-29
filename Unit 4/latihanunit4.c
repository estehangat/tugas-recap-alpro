#include <stdio.h>

void menghitung(int sisi){
    int keliling = 4 * sisi;
    int luas = sisi * sisi;
    int volume = sisi * sisi * sisi;

    printf("Keliling Persegi \t: %d\n", keliling);
    printf("Luas Persegi \t\t: %d\n", luas);
    printf("Volume Kubus \t\t: %d", volume);
}

int main(){
    int sisi;
    printf("Masukkan sisi : ");
    scanf("%d", &sisi);
    menghitung(sisi);

    return 0;
}