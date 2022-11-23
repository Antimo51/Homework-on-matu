#include<stdio.h>

void swap(int *array, int n){
	if(array==NULL||n<=0){
		printf("error\n");
		return;
	}

	int t=*array;
	*array=*(array+n-1);
	*(array+n-1)=t;
}
