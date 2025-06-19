#include <stdio.h>

int main() {
    int n, pos;
    int arr[100];

    printf("Nhap so luong phan tu:");
    scanf("%d", &n);
    if (n < 0 || n > 100) {
        printf("So luong phan tu khong hop le");
        return 1;
    }
    printf("Nhap %d phan tu:\n",n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Nhap vi tri muon xoa:\n");
    scanf("%d", &pos);
    if (pos <0 || pos > n) {
        printf("khong hop le");
        return 1;
    }
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Mang sau khi xoa:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if (i != n - 1) printf("; ");
    }
    printf("\n");
    return 0;
}