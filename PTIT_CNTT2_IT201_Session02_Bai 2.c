#include <stdio.h>

int main() {
    int n,x;
    int arr[100];

    printf("Nhap so luong phan tu:\n");
    scanf("%d",&n);
    if (n<=0||n>100) {
        printf("so phan tu khong hop le");
        return 1;
    }
    printf("Nhap %d phan tu cua mang:\n",n);
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Nhap so can dem:\n");
    scanf("%d",&x);

    int count = 0;
    for (int i=0;i<n;i++) {
        if (arr[i]==x) {
            count++;
        }
    }
    printf("So %d xuat hien %d lan trong mang.\n",x, count);
    return 0;
}