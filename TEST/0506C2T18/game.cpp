#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
//var
const int MAXN=1e6+10;
int n,a[11],b[11],ans;
//function
//main
int main(){
	ios::sync_with_stdio(false);
	cin>>n;
	char temp[MAXN];
	cin>>temp;
	int t;
	for(int i=0;i<n;++i){
		t=temp[i]-'0';
		++a[t];
	}
	cin>>temp;
	for(int i=0;i<n;++i){
		t=temp[i]-'0';
		++b[t];
	}
	t=0;
	for(int i=10;~i;--i){
		t+=b[i];
		if(a[i]>t){
			ans+=a[i]-t;
			t=0;
		}
		else t-=a[i];
	}
	cout<<ans<<endl;
	ans=t=0;
	for(int i=10;~i;--i){
		if(a[i]>t){
			ans+=t;
			t=0;
		}
		else{
			ans+=a[i];
			t-=a[i];
		}
		t+=b[i];
	}
	cout<<ans<<endl;
	return 0;
}
