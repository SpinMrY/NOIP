#include <bits/stdc++.h>
using namespace std;
//define
int p,q,amu,azi,n,a,b;
//main
int main(){
	ios::sync_with_stdio(false);
	cin>>n>>a>>b;
	double min=a/b;
	p=1;q=n;
	for(int fenmu=1;fenmu<=n;fenmu++){
		for(int fenzi=n;fenzi>=1;fenzi--){
			if(b*fenmu<a*fenzi && fenmu*q>fenzi*p){
				p=fenmu;q=fenzi;
			}
		}
	}
	cout<<p<<" "<<q<<endl;
	return 0;
}
