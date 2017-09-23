#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
//var1
ll pell[10000000],ans;
ll k[10000000];
ll n1[10000000];
const int mod=32767;
//function
void _pell(int _k){
	pell[1]=1;pell[2]=2;
	for(int i=3;i<=_k;i++){
		pell[i]=pell[i-1]*2+pell[i-2];
	}
	return;
}
//main
int main(){
	ios::sync_with_stdio(false);
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		cin>>k[i];n1[i]=k[i];	
	}
	sort(k+1,k+n+1);
	int temp=k[n];
	//cout<<temp<<endl;
	_pell(temp);
	temp=0;
	for(int i=1;i<=n;i++){
		temp=n1[i];
		//cout<<"n "<<temp<<endl;
		cout<<(pell[temp]&mod)<<endl;
	}
	return 0;
}
