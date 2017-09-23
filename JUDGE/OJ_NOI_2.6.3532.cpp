#include <iostream>
#include <cstdio>
using namespace std;
int s[100005];
int f[100005];
int main(){
	int max=0,n=0;
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++){cin>>s[i];}
	for(int i=1;i<=n;i++){
		f[i]=s[i];
		for(int j=1;j<=i-1;j++){
			if(s[j]<s[i]&&f[i]<f[j]+s[i]){
				f[i]=f[j]+s[i];
			}
		}
		if(f[i]>max){max=f[i];}
	}
	cout<<max<<endl;
	return 0;
}
