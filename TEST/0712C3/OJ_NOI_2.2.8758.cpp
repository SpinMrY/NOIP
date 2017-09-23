#include <bits/stdc++.h>
using namespace std;
//function
int lowbit(int f){return (f&(-f));}

int zhishu(int k){
	int ans=0;if(k==1)return 0;
	while(k!=1){k/=2;ans++;}//cout<<ans<<endl;
	return ans;
}

int dfs(int n){
	int a[20],i=0,t=0;
	while(n!=0){
		a[++i]=lowbit(n);
		n-=lowbit(n);
	}
	for(;i>=1;i--){
		t=zhishu(a[i]);
		if(t>2){
			cout<<"2(";
			dfs(t);
			cout<<")";
		}
		else if(t==2)cout<<"2(2)";
		else if(t==1)cout<<"2";
		else cout<<"2(0)";
		if(i!=1)cout<<"+";
	}
}
//main
int main(){
	ios::sync_with_stdio(false);
	int N;cin>>N;
	dfs(N);
	return 0;
}
