#include<stdio.h>
#include<cstring>
#include<ctype.h>
using namespace std;
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

    char ch[100];
    scanf("%s",ch+1);
    int n=strlen(ch+1);
    for(int i=1;i<=n;++i){
        if(isdigit(ch[i])||isalpha(ch[i])) printf("%c",ch[i]);
        else{
            int p=i; printf("%c",ch[i]);
            while(ch[i+1]==ch[p]) ++i;
        }
    }

    return 0;
    
}
