#include <stdio.h>

int main() {
    int n;

    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    int updateValue, updateIndex;
    printf("Nhap gia tri can cap nhat: ");
    scanf("%d", &updateValue);
    printf("Nhap chi so can cap nhat: ");
    scanf("%d", &updateIndex);

    
   
    
    arr[updateIndex] = updateValue;

   
    printf("Mang sau khi cap nhat: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

