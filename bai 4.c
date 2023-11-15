#include <stdio.h>

int main() {
    int n, findNumber;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
    	printf("nhap phan tu thu %d :",i + 1);
    	scanf("%d",&arr[i]);
	}
	int addvalue,addindex;
	printf("nhap gia tri can them :");
	scanf("%d",&addvalue);
	printf("nhap chi so can chen :");
	scanf("%d",&addindex);
	if (addindex < 0 || addindex > n){
		printf("chi so chen khong hop le.\n ");
		return 1;
	}
	for (int i = n - 1; i >= addindex; i--) {
        arr[i + 1] = arr[i];
    }
    arr[addindex] = addvalue;
    n++;  

    
    printf("Mang sau khi them chen: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}







