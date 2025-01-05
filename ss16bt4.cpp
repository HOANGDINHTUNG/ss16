#include<stdio.h>
void printfArr(int *arr,int n);
int main(){
//	int x;
//	printf("moi nhap vao so phan tu : ");
//	scanf("%d",&x);
//	int array[x];
//	int size=sizeof(array)/sizeof(int);
//	for(int i=0;i<size;i++){
//		printf("array[%d] = ",i);
//		scanf("%d",array+i);
//	}
	int array[]={3,5,7,3,7,8};
	int size=sizeof(array)/sizeof(int);
	printf("In ra mang\n");
	printfArr(array,size);
}
void printfArr(int *arr,int n){
	for(int i=0;i<n;i++){
		printf("array[%d] = %d\n",i,*(arr+i));
	}
}

