#include <stdio.h>
void Biodata(int tahun, char nama[20], char asal[15] ){
    int tahun_sekarang = 2020;
    printf("Perkenalkan Nama Saya: %s\n", nama);
    printf("Umur Saya: %d\n", tahun_sekarang - tahun);
    printf("Saya Adalah Angkatan: %d\n", tahun_sekarang);
    printf("Asal Saya Dari: %s\n\n", asal);
}
int main(){
    int tahunLahir, i = 0;
    char A[20], B[15];
    while(i < 2) {
        scanf(" %d",&tahunLahir); 
        scanf(" %[^\n]%*c",&A);
        scanf(" %[^\n]%*c",&B);
        Biodata(tahunLahir, A, B);
    i++;
    }
    return 0;
}