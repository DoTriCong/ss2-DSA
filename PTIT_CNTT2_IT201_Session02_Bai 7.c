#include <stdio.h>

int main() {
    int arr[100];
    int size;
    printf("Moi ban nhap so luong phan tu trong mang\n");
    scanf("%d",&size);
    if(size>100 || size<=0) {
        printf("So luong phan tu khong hop le!!");
        return 1;
    }
    for(int i=0;i<size;i++){
        printf("Phan tu thu %d la: ", i+1);
        scanf("%d",&arr[i]);
    }
    int found=0;
    int num;
    printf("Nhap mot so nguyen bat ky");
    scanf("%d",&num);

    for(int i=0;i<size-1;i++) {
        for(int j=i+1;j<size;j++) {
            if (arr[i]+arr[j]==num) {
                printf("%d, %d", arr[i], arr[j]);
                found=1;
                break;;
            }
        }
        if(found) {
            break;
        }
    }
    if(!found) {
        printf("Khong tim thay!!!");
    }
}