#include <iostream>
#include <cstdio>
using namespace std;
int n[100005],f[100005],ans,N;
int main(){
	ios::sync_with_stdio(false);
	cin>>N;int max=0;
	for(int i=1;i<=N;i++){cin>>n[i];}
	for(int i=1;i<=N;i++){
		f[i]=0;
		for(int j=1;j<=i-1;j++){
			if(n[j]<n[i]&&f[j]>f[i]){
				f[i]=f[j];
			}
		}
		f[i]++;
		if(f[i]>ans){
			ans=f[i];
		}
	}
	cout<<ans<<endl;
	return 0;
}
