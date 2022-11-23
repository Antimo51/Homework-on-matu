#include<stdio.h>

struct Person{
	int age;
	int height;
};

void Swap(int &a,int &b){
	int t;
	t=a;
	a=b;
	b=t;
}

void swap(Person *array, int n){
	if(array==NULL||n<=0) printf("error\n");
	Swap((array)->height, (array+n-1)->height);
}
