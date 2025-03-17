#include<stdio.h>
#include<math.h>
#include <stdio.h>

#include <stdio.h>

#include <stdio.h>

void tinhLuyThua(double x) {
    printf("x^2 = %.2f\n", x * x);
    printf("x^3 = %.2f\n", x * x * x);
    printf("x^4 = %.2f\n", x * x * x * x);
}

int main() {
    double x;
    printf("Nhap x: ");
    scanf("%lf", &x);
    tinhLuyThua(x);
    return 0;
}
