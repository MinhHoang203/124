#include <stdio.h>
#include <string.h>

struct SinhVien {
    char ten[50];
    float diem;
};

void sapXepTheoTen(struct SinhVien sv[], int n) {
    struct SinhVien temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(sv[i].ten, sv[j].ten) > 0) {
                temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
}

int main() {
    struct SinhVien sv[20];
    printf("Nhap thong tin cho 20 sinh vien:\n");
    for (int i = 0; i < 20; i++) {
        printf("Nhap ten cua sinh vien thu %d: ", i + 1);
        scanf("%s", sv[i].ten);
        printf("Nhap diem cua sinh vien thu %d: ", i + 1);
        scanf("%f", &sv[i].diem);
    }

    // S?p x?p m?ng theo th? t? alphabet c?a tên sinh viên
    sapXepTheoTen(sv, 20);

    // In thông tin sau khi s?p x?p
    printf("Thong tin sau khi sap xep theo ten:\n");
    for (int i = 0; i < 20; i++) {
        printf("Sinh vien %d: Ten: %s, Diem: %.2f\n", i + 1, sv[i].ten, sv[i].diem);
    }

    return 0;
}

