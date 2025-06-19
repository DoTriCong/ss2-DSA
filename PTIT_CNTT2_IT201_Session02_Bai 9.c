#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int count[100] = {0};
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n < 0 || n > 100) {
        printf("So luong phan tu khong hop le");
        return 1;
    }
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        count[i] = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count[i]++;
            }
        }
    }
    int maxCount = count[0], maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxIndex = i;
        }
    }

    printf("Phan tu xuat hien nhieu nhat: %d (xuat hien %d lan)\n", arr[maxIndex], maxCount);

    return 0;
}
