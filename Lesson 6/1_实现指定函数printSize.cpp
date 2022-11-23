#include<stdio.h>

void printSize(int *first,int *last)
{
	if(first==NULL||last==NULL||last-first<=0){
		printf("error\n");
		return;
	}
	int num=(int)(last-first)+1;
	int siz=num<<2;
	printf("%d,%d\n",num,siz);
	return;
}
