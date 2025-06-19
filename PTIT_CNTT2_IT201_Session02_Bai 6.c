#include <stdio.h>

int main() {
    int n, pos, newValue;
    int arr[101];

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
    printf("Nhap vi tri muon chen:\n");
    scanf("%d", &pos);
    printf("Nhap gia tri muon chen:\n");
    scanf("%d", &newValue);

    if (pos < 0 || pos > n || pos >= 100)  {
        printf("Vi tri khong hop le\n");
        return 1;
    }
    for (int i = n; i>pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = newValue;
    n++;
    printf("Mang sau khi chen:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if (i == n - 1) printf(", ");
    }
    printf("\n");
    return 0;
}