#include <cstdio>
#include <algorithm>
using namespace std;
int n,b[1050],a[105][105],temp[105][105],best[1050];
int solve(){
	memset(b,0,sizeof(b));
	int ans=-2147483647,i;
	for(i=1;i<=n;i++){
		b[i]=max(b[i-1]+best[i],best[i]);
	}
	for(i=1;i<=n;i++){
		ans=max(ans,b[i]);
	}
	return ans;
}
int main(){
	int i,j,k,ans;
	scanf("%d",&n);
	
}
