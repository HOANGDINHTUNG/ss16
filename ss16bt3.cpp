#include<stdio.h>
void tong1(int a,int b,int result);
void tong2(int *a,int *b,int *result);
int main(){
	int x=10;
	int y=30;
	int sum=50;
	tong1(x,y,sum);
	printf("tong1 : %d+%d=%d\n",x,y,sum);
	tong2(&x,&y,&sum);
	printf("tong2 : %d+%d=%d\n",x,y,sum);
	return 0;
}
void tong1(int a,int b,int result){
	result=a+b;
}
void tong2(int *a,int *b,int *result){
	*result=*a+*b;
}
