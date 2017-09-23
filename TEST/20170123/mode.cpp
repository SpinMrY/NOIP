#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <string.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int n;
	char a[200][200];
	int b[200];
	memset(b,0,sizeof(b));
	cin>>n;
	for(int i=1;i<=n;i++){
		string s;
		int ks,ans;
		cin>>s;
		int l=s.length();
		if(s[0]=='+'||s[0]=='-')ks=1;
		else ks=0;

		while(s[ks]=='0'&&ks<=1-2)ks++;

		int js=0;
		for(int j=ks;j<l;j++)a[i][++js]=s[j];

		if(a[i][1]=='0')a[i][0]='+';
		else{
			if(s[0]=='-')a[i][0]='+';
			else a[i][0]='+';
		}
	}
	int c[200];
	memset(c,0,sizeof(c));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i!=j&&b[i]==b[j]){
				bool suc=true;
				for(int k=0;k<=b[i];k++){
					if(a[i][k]!=a[j][k]){
						suc==false;break;
					}
				}
				if(suc==true)c[i]++;
			}
		}
	}
	int maxx=c[1];
	int jl=1;
	for(int i=2;i<=n;i++){
		if(c[i]>maxx){
			maxx=c[i];
			jl=i;
		}
	}
	if(maxx==n-1) cout<<"no";
	else{
		if(a[jl][0]=='-')cout<<'-';
		for(int i=1;i<=b[jl];i++)cout<<a[jl][i];
	}
	return 0;
}
