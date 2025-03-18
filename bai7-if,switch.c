#include <stdio.h>
#include <math.h>
#include <stdio.h>

int main() {
    float dtb;

    printf("Nhap diem trung binh: ");
    scanf("%f", &dtb);

    if (dtb < 0 || dtb > 10) {
        printf("Diem khong hop le! (0 <= Diem <= 10)\n");
    } else if (dtb < 5) {
        printf("Xep loai: Yeu\n");
    } else if (dtb < 7) { // Đã bao gồm dtb >= 5
        printf("Xep loai: Trung binh\n");
    } else if (dtb < 8) { // Đã bao gồm dtb >= 7
        printf("Xep loai: Kha\n");
    } else if (dtb < 9) { // Đã bao gồm dtb >= 8
        printf("Xep loai: Gioi\n");
    } else { // dtb >= 9
        printf("Xep loai: Xuat sac\n");
    }

    return 0;
}
