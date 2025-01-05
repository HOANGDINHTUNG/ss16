#include<stdio.h>
void swap(int *a,int *b);
int main(){
	int x=10;
	int y=20;
	printf("Gia tri ban dau cua x: %d\n", x);
	printf("Gia tri ban dau cua y: %d\n", y);
	swap(&x,&y);
	printf("Gia tri sau khi doi cua x: %d\n", x);
	printf("Gia tri sau khi doi cua y: %d\n", y);
	return 0;
}
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
