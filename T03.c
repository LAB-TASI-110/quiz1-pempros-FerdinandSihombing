#include <stdio.h>

int main() {
    char nama[50];
    char jenis[50];
    float berat;
    float harga;
    float total;

    printf("=== PROGRAM LAUNDRY DEL ===\n");

    printf("Nama pelanggan : ");
    scanf(" %[^\n]", nama);

    printf("Jenis cucian   : ");
    scanf(" %[^\n]", jenis);

    printf("Berat (kg)     : ");
    scanf("%f", &berat);

    printf("Harga/kg       : ");
    scanf("%f", &harga);

    total = berat * harga;

    printf("\n=== STRUK LAUNDRY ===\n");
    printf("Nama   : %s\n", nama);
    printf("Jenis  : %s\n", jenis);
    printf("Berat  : %.2f kg\n", berat);
    printf("Total  : %.2f\n", total);

    return 0;
}