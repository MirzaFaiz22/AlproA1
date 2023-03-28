/* Nama File    : 1_JumPrimaFungsi.c */
/* Deskripsi    : menghitung sub program fungsi untuk jumlah deret bilangan prima */
/* Pembuat      : Muhammad Mirza Faiz Rabbani - 24060122140127 */
/* Tanggal      : 28 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int isPrima(int n) {
    if (n <= 1) {
        return 0;
    }
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int i, N, sum = 0;
    printf("Masukkan bilangan n: ");
    scanf("%d", &N);
    
    if (N > 0){
        for (i = 1; i <= N; i++)
        {
            if (isPrima (i)){
                if (sum == 0) {
                    printf("%d",i);
                }else{
                    printf("+%d",i);
                }
                sum = sum + i;
            }            
        }
        printf(" Dengan jumlahan deret bilanganya adalah Sn = %d", sum);   
    }else{
        printf("Tidak ada bilangan prima, sehingga jumlah deretnya Sn = 0 ");
    }
    return 0;
}
