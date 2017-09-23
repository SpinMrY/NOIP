#include <bits/stdc++.h>
using namespace std;
//define
typedef long long LL;
const int maxN=31;
char preord[maxN],enord[maxN];
LL C(LL n,LL m){
    if(m<n-m)m=n-m;
    LL ans=1;
    for(LL i=m+1;i<=n;i++)
		ans*=i;
    for(LL i=1;i<=n-m;i++)
		ans/=i;
    return ans;
}
LL ans;
int n;
void possible(int preleft,int preright,int endleft,int endright){
    int cnt=0,root=preleft+1;
    while(root<=preright)
	{
        int i;
        for(i=endleft;i<=endright;i++)
            if(enord[i]==preord[root])
				break;
        int size=i-endleft+1;
        possible(root,root+size-1,endleft,i);
        cnt++;
        root+=size;
        endleft=i+1;
    }
    ans*=C((LL)n,(LL)cnt);
}
void solv(){
    int len=strlen(preord);
    possible(0,len-1,0,len-1);
    printf("%lld\n",ans);
}
int main(){
    while(~scanf("%d",&n)&&n)
	{
        memset(preord,0,sizeof(preord));
        memset(enord,0,sizeof(enord));
        scanf("%s%s",preord,enord);
        ans=1;
        solv();
    }
    return 0;
}

