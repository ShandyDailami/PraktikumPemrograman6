#include <stdio.h>
int MaxBilangan(int angka1, int angka2, int angka3, int angka4) {
    if (angka1 > angka2 && angka1 > angka3 && angka1 > angka4) {
        return angka1;
    } else if (angka2 > angka1 && angka2 > angka3 && angka2 > angka4) {
        return angka2;
    } else if (angka3 > angka1 && angka3 > angka2 && angka3 > angka4) {
        return angka3;
    } else {
        return angka4;
    }
}
int main() {
    int a, b, c, d, i = 0;
    while(i < 3) {
        scanf("%d %d %d %d", &a, &b, &c, &d); 
        int hasil = MaxBilangan(a, b, c, d); 
        printf("%d", hasil);
    i++;
    }
    return 0;
}