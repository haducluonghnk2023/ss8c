#include<stdio.h>

int main(){
	int n,findnumber;
	
	printf("nhap phan tu cua mang ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d :",i + 1);
		scanf("%d",&arr[i]);
	}
	printf("nhap gia tri can tim :");
	scanf("%d",&findnumber);
	int indices[n];
	int total = 0;
	int count = 0;
	for(int i=0;i<n;i++){
		if(arr[i] == findnumber){
				indices[count++]=i;
				total += arr[i];
		}
	}
	if(count>0){
		printf("chi so cua cac phan tu co gia tri la %d :",findnumber);
		for(int i=0;i<count;i++){
			printf("%d",indices[i]);
		}
		printf("\ntong so phan tu co gia tri la %d ",findnumber,total);
	}else{
		printf("khong co phan tu nao co gia tri % trong mang :",findnumber);
	}
	return 0;
}
