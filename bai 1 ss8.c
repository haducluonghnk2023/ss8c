#include<stdio.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang 1 chieu :");
	scanf("%d",&n);
	float arr[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d :",i + 1);
		scanf("%f",&arr[i]); 
		
	}
	
		int max_value = arr[0];
		int min_value = arr[0];
		for(int i=1;i<n;i++){
			if(arr[i]>max_value){
			
			max_value= arr[i];
		}
		if(arr[i]<min_value){
			min_value=arr[i];
		}

		}
		printf("gia tri lon nhat la %d\n",max_value);
			printf("gia tri nho nhat la %d\n",min_value);	
		return 0;
}
