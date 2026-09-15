#include <stdio.h>
#include <stdbool.h>

// Hàm kiểm tra số nguyên tố
bool kiemTraNguyenTo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // Nếu chia hết cho số khác thì không phải số nguyên tố
        }
    }
    return true;
}

int main() {
    int so;
    printf("--- CHUONG TRINH KIEM TRA SO NGUYEN TO ---\n");
    printf("Moi em nhap vao mot so nguyen duong: ");
    scanf("%d", &so);

    if (kiemTraNguyenTo(so)) {
        printf("=> Chuc mung! %d LA so nguyen to.\n", so);
    } else {
        printf("=> %d KHONG phai la so nguyen to.\n", so);
    }

    return 0;
}