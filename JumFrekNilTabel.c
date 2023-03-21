/* Nama File    		: JumFrekNilTabel.c */
/* Deskripsi    		: menjumlahkan nilai elemen tabel T yang muncul lebih dari 1
/* Pembuat      		: Muhammad Mirza Faiz Rabbani - 24060122140127 */
/* Tanggal Pembuatan    : 21 maret 2023 */	

int main () {
    /* Kamus */
    int N, i, j, frekuensi, jumlah = 0;
    int T[100], a[100];

    /* Algoritma*/

    printf("Nilai N = ");
    scanf("%d", &N);

    for (i = 0; i < N; i++){
        printf("T[%d] = ", i);
        scanf("%d",&T[i]);
        a[i] = 1;
    }
    
    for (i = 0; i < N; i++){
        frekuensi = 1;
        for (j = i + 1; j < N; j++){
            if (T[i] == T[j]){
                frekuensi++;
                a[j] = 0;
            }
        }
        if (a[i] != 0){
            a[i] = frekuensi;
        }        
    }
    for (i = 0; i < N; i++){
        if (a[i] > 1){
            jumlah = jumlah + (T[i]* a[i]);
        }
    }

    printf("%d ", jumlah);
        

    return 0;

}