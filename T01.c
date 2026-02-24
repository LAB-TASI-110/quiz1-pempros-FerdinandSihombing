#include <stdio.h>
#include <string.h>

int main() {
    char kode[10];
    char nama[50][50];
    int porsi[50];
    int harga[50];
    int subtotal[50];

    int i = 0;
    int total = 0;

    while (1) {
        scanf("%s", kode);

        if (strcmp(kode, "END") == 0)
            break;

        scanf("%d", &porsi[i]);

        if (strcmp(kode, "NGS") == 0) {
            strcpy(nama[i], "Nasi Goreng");
            harga[i] = 25000;
        }
        else if (strcmp(kode, "AP") == 0) {
            strcpy(nama[i], "Ayam Penyet");
            harga[i] = 20000;
        }
        else if (strcmp(kode, "GG") == 0) {
            strcpy(nama[i], "Es Teh");
            harga[i] = 5000;
        }
        else {
            strcpy(nama[i], "Kode Salah");
            harga[i] = 0;
        }

        subtotal[i] = harga[i] * porsi[i];
        total += subtotal[i];
        i++;
    }

    printf("\n====================================================\n");
    printf("%-15s %5s %10s %10s\n", "Menu", "Porsi", "Harga", "Total");
    printf("====================================================\n");

    for (int j = 0; j < i; j++) {
        printf("%-15s %5d %10d %10d\n", nama[j], porsi[j], harga[j], subtotal[j]);
    }

    printf("====================================================\n");
    printf("%-32s %10d\n", "Total Pembayaran", total);
    printf("====================================================\n");

    if (total >= 200000)
        printf("Kupon : KUNING\n");
    else if (total >= 100000)
        printf("Kupon : BIRU\n");
    else
        printf("Kupon : TIDAK ADA\n");

    return 0;
}