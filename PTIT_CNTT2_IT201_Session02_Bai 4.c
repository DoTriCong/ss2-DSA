#include <stdio.h>

int main() {
    int n, pos, newValue;
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
    printf("Nhap vi tri muon sua:\n");
    scanf("%d", &pos);
    printf("Nhap gia tri moi tai vi tri do:\n");
    scanf("%d", &newValue);

    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le\n");
        return 1;
    }
    arr[pos] = newValue;
    printf("Mang sau khi cap nhat:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if (i != n-1) printf(", ");
    }
    printf("\n");
    return 0;
}