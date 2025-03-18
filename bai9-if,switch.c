#include<stdio.h>
#include<math.h>
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year, month, days;

    // Nhập năm và tháng từ người dùng
    printf("Nhap nam: ");
    scanf("%d", &year);
    printf("Nhap thang: ");
    scanf("%d", &month);

    // Kiểm tra tháng hợp lệ (1-12)
    if (month < 1 || month > 12) {
        printf("Thang khong hop le!\n");
        return 1;
    }

    // Xác định số ngày dựa vào tháng
    switch (month) {
        case 2:
            days = isLeapYear(year) ? 29 : 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
    }

    // In kết quả
    printf("Thang %d nam %d co %d ngay.\n", month, year, days);
    return 0;
}
