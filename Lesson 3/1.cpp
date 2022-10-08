#include<stdio.h>
#define in Read()

int in{
    int i=0,f=1; char ch=0;
    while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
    if(ch=='-') f=-1, ch=getchar();
    while('0'<=ch&&ch<='9') i=(i<<1)+(i<<3)+ch-48, ch=getchar();
    return i*f;
}

int main(){

    // freopen("1.in","r",stdin);

    int x=in;
    int ans=x;
    printf("%d",ans);
    for(int i=1;i<=4;++i){
        ans*=x;
        printf(" %d",ans);
    }
    printf("\n");
    return 0;
    
}