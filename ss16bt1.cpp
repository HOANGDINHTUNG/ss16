#include<stdio.h>
int main(){
	int number=10;
	int *numberPtr=&number;
	printf("In ra gia tri C1: %d\n",number);
	printf("In ra gia tri C2: %d\n",*numberPtr);
	printf("In ra dia chi C1: %d\n",numberPtr);
	printf("In ra dia tri C2: %d\n",&number);
	return 0;
}
