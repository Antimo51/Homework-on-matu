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

void swap(int x,int y){
    int t=x;
    x=y;
    y=t;
    return;
}

int main(){

    // freopen("1.in","r",stdin);

    int a=in, b=in, c=in;
    if(a<=0||b<=0||c<=0) printf("error");
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);
    if(a+b>c) printf("yes");
    else printf("no");
    return 0;
    
}