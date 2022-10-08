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
    int x=1;
    for(int i=1;i<=9;++i){
        x=(x+1)*2;
        printf("%d,",x);
    }
    printf("%d",x);
    return 0;
}