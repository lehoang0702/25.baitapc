#include <stdio.h>
#include <math.h>

double tinhDienTich(double r) {
    return 4 * M_PI * r * r;
}

double tinhTheTich(double r) {
    return (4.0 / 3.0) * M_PI * pow(r, 3);
}

int main() {
    double r;
    printf("Nhap ban kinh R: ");
    scanf("%lf", &r);
    printf("Dien tich: %.2f\nThe tich: %.2f\n", tinhDienTich(r), tinhTheTich(r));
    return 0;
}
