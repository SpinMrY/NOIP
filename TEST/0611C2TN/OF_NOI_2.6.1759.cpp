#include <iostream>
uisng namespace std;
int f[100005],a[100005],ans;
int main(){
	ios::sync_with_stdio(false);
	int n=0;cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		f[i]=1;
		for(int j=0;j<i;j++){
			if(a[i]>a[j] && f[j]+1>f[i]){
				if(a[i]>a[j] ) f[i]=f[j]+1;
			}
		}
	}
}
