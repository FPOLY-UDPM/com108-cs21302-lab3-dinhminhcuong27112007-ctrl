/******************************************************************************
 * Họ và tên: [Đinh Minh Cường]
 * MSSV:      [PS48680]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>
#include <stdio.h>

int main() {
    int soDien;
    float tienDien;

    // Nhập số điện tiêu thụ
    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%d", &soDien);

    // Tính tiền điện
    if (soDien <= 50) {
        tienDien = soDien * 1678;
    } else if (soDien <= 100) {
        tienDien = 50 * 1678 + (soDien - 50) * 1734;
    } else {
        tienDien = 50 * 1678 + 50 * 1734 + (soDien - 100) * 2014;
    }

    // Xuất kết quả
    printf("So tien dien can phai dong: %.0f VND\n", tienDien);

    return 0;
}

    
    // Khai báo biến


    // Nhập dữ liệu


    // Xử lý, tính toán VÀ Hiển thị kết quả

