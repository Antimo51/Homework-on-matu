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

const int N=1e5+5;
double fac[N];

int main(){

    // freopen("1.in","r",stdin);

    fac[0]=fac[1]=1;
    for(int i=2;i<=100;++i) fac[i]=fac[i-1]*i;
    double x,xpow=1;
    scanf("%lf",&x);
    int n=in;
    if(n<0){
        printf("error");
        return 0;
    }
    double ans=1;
    for(int i=1;i<=n;++i){
        xpow*=x;
        ans+=xpow/fac[i];
    }
    printf("%.6lf",ans);
    return 0;
    
}