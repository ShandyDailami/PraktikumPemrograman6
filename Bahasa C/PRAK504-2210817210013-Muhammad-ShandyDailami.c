#include <stdio.h>
int reverse(int reversed) {
    int i = 0;
    while(reversed != 0) {
        i = i * 10;
        i = i + reversed % 10;
        reversed /= 10;
    }
    return i;
}
int main() {
    int A, B, i = 0;
    while(i < 3) {
        scanf("%d %d", &A, &B); 
        A = reverse(A); 
        B = reverse(B);
        int C = A + B; 
        printf("%d", reverse(C));
    i++;
    }
    return 0;
}