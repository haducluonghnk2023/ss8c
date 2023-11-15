#include<stdio.h>
int main(){
	int row,col;
	printf("nhap so dong cua mang ");
	scanf("%d",&row);
	printf("nhap so cot cua mang ");
	scanf("%d",&col);
	float arr[row][col];
	for(int i=0;i<row;i++){
		for(int j=1;j<col;j++){
			printf("nhap arr[%d][%d]:",i,j);
			scanf("%f",&arr[i][j]);
			
		
		}
		
	}
	float sum=0;
	printf("cac phan tu co gia tri chan la :\n");
		for(int i=0;i<row;i++){
		for(int j=1;j<col;j++){
			if((int) arr[i][j] % 2 == 0){
				printf("%.2f",arr[i][j]);
				sum += arr[i][j];
			}
		}
	}
	printf("\n tong cac phan tu co gia tri chan la %d :",sum);
	return 0;
}
