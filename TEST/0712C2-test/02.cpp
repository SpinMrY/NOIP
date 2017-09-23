#include <bits/stdc++.h>
using namespace std;
//define
int f[10050];
int w[10050],c[10050];
//main
int main(){
	ios::sync_with_stdio(false);
	memset(f,-1,sizeof(f));f[0]=0;
	int M,N;cin>>M>>N;
	for(int i=1;i<=N;i++){	cin>>w[i]>>c[i];	}
	int ans=0;
	for(int i=1;i<=N;i++){
		for(int j=M;j>=w[i];j--){
			f[j]=max(f[j],(f[j-c[i]] 0));
			ans=max(f[j],ans);
		}
	}
	cout<<f[M]<<endl;
	return 0;
}
