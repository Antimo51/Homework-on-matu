#include<stdio.h>
#include<algorithm>

const int INF=2147483647;

void maxInt(int *array, int n, int *result){
	if(array==NULL||n<=0||result==NULL){
		printf("error\n");
		return;
	}
	int res=-INF;
	for(int i=0;i<n;++i)
		res=std::max(res,*(array+i));
	*result=res;
}
