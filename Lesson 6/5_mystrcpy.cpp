#include<stdio.h>

void my_strcpy(char *destination, char *source){
	if(destination==NULL||source==NULL){
		printf("error\n");
		return;
	}

	int i=0;
	while(*(source+i)!='\0'&&*(source+i)!=' '){
		*(destination+i)=*(source+i);
		++i;
	}
	*(destination+i)=' ';
}
