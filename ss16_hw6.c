#include <stdio.h>

int timKiemPhanTu(int *mang, int kichThuoc, int giaTriTim) {
    for (int i = 0; i < kichThuoc; i++) {
        if (*(mang + i) == giaTriTim) { 
            return i;
        }
    }
    return -1;
}

int main() {
    int mang[] = {1, 3, 5, 7, 9, 11, 13};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    int giaTriTim;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &giaTriTim);
    int viTri = timKiemPhanTu(mang, kichThuoc, giaTriTim);
    if (viTri != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri %d trong mang.\n", giaTriTim, viTri);
    } else {
        printf("Gia tri %d khong ton tai trong mang.\n", giaTriTim);
    }

    return 0;
}

