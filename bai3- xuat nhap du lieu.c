
#include <stdio.h>

void phepToan(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
}

int main() {
    int a, b;
    printf("Nhap 2 so nguyen a, b: ");
    scanf("%d %d", &a, &b);
    phepToan(a, b);
    return 0;
}
