#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct fenshu{
	int fenzi;
	int fenmu=1;
};
struct fenshu f[15];
struct fenshu ans;
int main(){
	int n;
	cin>>n;
	ans.fenmu=1;
	for(int i=0;i<n;i++){
		scanf("%d/%d",&f[i].fenzi,&f[i].fenmu);
	}
	f[n+1].fenzi=0;f[n+1].fenmu=1;
	for(int i=0;i<n;i++){
		ans.fenmu*=f[i].fenmu;
	}
	for(int i=0;i<n;i++){
		ans.fenzi+=(ans.fenmu/f[i].fenmu)*f[i].fenzi;
	}
	int gcdnum=__gcd(ans.fenzi,ans.fenmu);
	ans.fenzi/=gcdnum;
	ans.fenmu/=gcdnum;
	if(ans.fenmu==1){
		cout<<ans.fenzi<<endl;
		//cout<<"分母"<<ans.fenmu<<endl;
	}
	else{
		cout<<ans.fenzi<<"/"<<ans.fenmu<<endl;
	}
	return 0;
}
