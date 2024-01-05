#include <stdio.h>
#include <string.h>

struct SinhVien {
    char ten[50];
    float diemThi;
};

void sapXepDiemGiamDan(struct SinhVien sv[], int n) {
    struct SinhVien temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (sv[i].diemThi < sv[j].diemThi) {
                temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
}

int main() {
    struct SinhVien sv[20];
    int n = 20;

    
    for (int i = 0; i < n; i++) {
        printf("Nhap ten cua sinh vien thu %d: ", i+1);
        scanf("%s", sv[i].ten);
        printf("Nhap diem thi cua sinh vien thu %d: ", i+1);
        scanf("%f", &sv[i].diemThi);
    }

       sapXepDiemGiamDan(sv, n);

    
    printf("Danh sach sinh vien sau khi sap xep theo diem giam dan:\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien %d: %s - Diem: %.2f\n", i+1, sv[i].ten, sv[i].diemThi);
    }

    return 0;
}
