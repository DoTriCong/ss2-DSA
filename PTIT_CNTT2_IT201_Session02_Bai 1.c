    #include <stdio.h>

int main() {
    int n;
    int arr[100];

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if(n <= 0 || n > 100) {
        printf("So luong phan tu khong hop le: ");
        return 1;
    }
    printf("Nhap %d luong phan tu: \n",n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Gia tri lon nhat cua mang la:%d\n",max);
    return 0;
}