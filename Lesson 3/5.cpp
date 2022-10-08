#include<stdio.h>
#include<math.h>
#define in Read()

int in{
    int i=0,f=1; char ch=0;
    while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
    if(ch=='-') f=-1, ch=getchar();
    while('0'<=ch&&ch<='9') i=(i<<1)+(i<<3)+ch-48, ch=getchar();
    return i*f;
}

int main(){
    for(int i=0;i<=20;++i)
        for(int j=0;j<=50;++j)
            for(int k=0;k<=100;++k)
                if((i*5+j*3+k==100)&&(i+j+k*3==100))
                    printf("%d,%d,%d,",i,j,k*3);
    return 0;
}