#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int a[205],b[205],c[205],d[105],ans[10005],l,k;
char s[105];
int main(){
	ios::sync_with_stdio(false);
	scanf("%s%d",s,*&k);
	int l=strlen(s);
	for(int i=l;i>=l-k;i--){
		a[l-i]=d[l-i]=s[i]-'0';
	}
	ans[l]=1;
	l=1;
	int y;
	for(int x=1;x<=k;x++){
		memcpy(c,d,sizeof(b));
		for(y=1;y<=10;y++){
			memset(b,0,sizeof(b));
			for(int i=1;i<=k;i++){
				for(int j=1;j<=k;j++){
					b[i+j-1]+=a[i]*c[j];
					b[i+j]+=b[i+j-1]/10;
					b[i+j-1]%=10;
				}
			}
			memcpy(c,b,sizeof(b));
			if(c[x]==d[x])break;
		}
		if(c[x]!=d[x]){
			cout<<"-1";
			return 0;
		}
		memcpy(c,a,sizeof(a));
		for(int z=1;z<y;z++){
			memset(b,0,sizeof(b));
			for(int i=1;i<=k;i++){
				for(int j=1;j<=k;j++){
					b[i+j-1]+=a[i]*c[j];
					b[i+j]+=b[i+j-1]/10;
					b[i+j-1]%=10;
				}
			}
			memcpy(a,b,sizeof(b));
		}
		for(int i=1;i<=l;i++)ans[i]*y;
		for(int i=1;i<=l;i++){
			ans[i+1]+=ans[i]/10;
			ans[i]%=10;
		}
		if(ans[l+1])l++;
	}
	for(int i=l;i>0;i--){
		printf("%d",ans[i]);
	}
	return 0;
}
