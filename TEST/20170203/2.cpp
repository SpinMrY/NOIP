#include<cstdio>
#include<iostream>
using namespace std;
struct station
{
	int aa,ct;
} s[100000];
int main(){
	ios::sync_with_stdio(false);
	int a,n,m,x,uk=0;
	cin>>a>>n>>m>>x;
	s[1].aa=a;
	s[2].aa=a;
	s[3].aa=2*a;
	s[4].aa=2*a;
	s[4].ct=1;
	for (int i=1;i<=3;i++) s[i].ct=0;
	for (int i=5;i<n;i++) {
		s[i].aa=s[i-1].aa+s[i-2].aa-a;
		s[i].ct=s[i-1].ct+s[i-2].ct+1;
	}
	uk=(m-s[n-1].aa)/s[n-1].ct;
	int result=s[x].aa+s[x].ct*uk;
	cout<<result<<endl;
	return 0;
}