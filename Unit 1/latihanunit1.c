#include <stdio.h>

int main(){
    int v, s, t;

    printf("Masukkan Jarak dan Waktu : ");
    scanf("%d %d", &s, &t);

    float kecepatan = (float) s / t;

    printf("Masukkan Kecepatan dan Waktu : ");
    scanf("%d %d", &v, &t);

    float jarak = (float) v * t;

    printf("Masukkan Jarak dan Kecepatan : ");
    scanf("%d %d", &s, &v);

    float waktu = (float) s / v;

    printf("Kecepatannya adalah %.2f\n", kecepatan);
    printf("Jaraknya adalah %.2f\n", jarak);
    printf("Waktunya adalah %.2f\n", waktu);

    return 0;
}