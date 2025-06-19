#include <stdio.h>

int main() {
    int n;
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
    printf("Mang sau khi dao nguoc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if (i !=0) printf(", ");
    }
    printf("\n");
    return 0;
}