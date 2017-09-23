#include <bits/stdc++.h>
using namespace std;
//define
int f;
const double p=3.141593;
const double chu=100.00;
double n,m,a[100005],_max;
//function
bool can(double S){
	int cnt=0;
	for(int i=1;i<=n;i++)cnt+=floor(a[i]/S);
	return cnt>=m+1;
}
//main
int main(){
	ios::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]=p*a[i]*a[i];_max=max(_max,a[i]);
	}
	double mid;
	double R=_max,L=0;
	while(R-L>1e-5){
		mid=(L+R)/2;
		if(can(mid))L=mid;
		else R=mid;
	}
	printf("%.3lf",L);
	return 0;
}
