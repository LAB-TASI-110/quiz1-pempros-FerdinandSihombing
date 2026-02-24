#include <stdio.h>

int main() {
    int N;
    printf("Masukkan jumlah data: ");
    scanf("%d", &N);

    int nilai[N];

    printf("Masukkan %d nilai:\n", N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }

    int kelompok;
    printf("Masukkan kode kelompok: ");
    scanf("%d", &kelompok);

    if(kelompok < 1 || kelompok > N) {
        printf("Kelompok tidak valid\n");
    } else {
        printf("Total nilai kelompok %d = %d\n", kelompok, nilai[kelompok-1]);
    }

    return 0;
}