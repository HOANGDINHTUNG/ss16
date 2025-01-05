#include<stdio.h>
#include<string.h>
void addIndex(int *arr,int value,int index,int *n);
void printfArr(int *arr,int *n);
int main(){	
	int array[]={5,6,3,8,97,56,23,1,45};
	int size=sizeof(array)/sizeof(int);
	printf("Mang truoc khi them: \n");
	printfArr(array,&size);
	int inputValue,inputIndex;
	printf("Moi nhap vao gia tri : ");
	scanf("%d",&inputValue);
	printf("Moi nhap vao vi tri muon them : ");
	scanf("%d",&inputIndex);
	addIndex(array,inputValue,inputIndex,&size);
	printfArr(array,&size);
	return 0;
}
void addIndex(int *arr,int value,int index,int *n){
	if(index<0){
		index=0;
	}
	else if(index>*n){
		index=*n;
	}
	for(int i=*n-1;i>=index;i--){
		*(arr+i+1)=*(arr+i);
	}
	*(arr+index)=value;
	++*n;
}
void printfArr(int *arr,int *n){
	for(int i=0;i<*n;i++){
		printf("array[%d] = %d\n",i,*(arr+i));
	}
}
