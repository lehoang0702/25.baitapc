#include<stdio.h>
#include<math.h>
#include <stdio.h>

void inNgayThang() {
    int ngay, thang, nam;
    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);
    printf("Hom nay la ngay %02d/%02d/%04d\n", ngay, thang, nam);
}

int main() {
    inNgayThang();
    return 0;
}
