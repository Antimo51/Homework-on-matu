#include<stdio.h>
#include<math.h>
#define in Read()

int in{
    int i=0,f=1; char ch=0;
    while((ch<'0'||ch>'9')&&ch!='-'){
        ch=getchar();
        if(ch=='a') return -1;
    }
    if(ch=='-') f=-1, ch=getchar();
    while('0'<=ch&&ch<='9') i=(i<<1)+(i<<3)+ch-48, ch=getchar();
    return i*f;
}

int fac[100];

int main(){

    // freopen("1.in","r",stdin);

    int x=in;
    if(x<1||x>10){ printf("error"); return 0;}
    fac[0]=fac[1]=1;
    for(int i=2;i<=10;++i) fac[i]=fac[i-1]*i;
    int ans=0;
    for(int i=1;i<=x;++i) ans+=fac[i];
    printf("%d\n",ans);
    return 0;
    
}