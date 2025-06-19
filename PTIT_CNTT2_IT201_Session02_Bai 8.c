#include <stdio.h>

int main() {
    int n,;
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
    printf("Cac phan tu lon hon tat ca phan tu dung sau:\n");
    for (int i = 0; i < n; i++) {
        int isGreater =1;
        for (int j = 0; j < n; j++) {
            if (arr[i] <= arr[j]) {
                isGreater = 0;
                break;
            }
        }
        if (isGreater) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}