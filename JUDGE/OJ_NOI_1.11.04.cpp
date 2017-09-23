#include <bits/stdc++.h>
using namespace std;
//define
double _min,_max,a[100005],k,n;
//function
int compute(double x){
	int ans=0;
	for(int i=1;i<=n;i++){
		ans=ans+int((a[i]/100.0)/x);
	}return ans;
}
//main
int main(){
	ios::sync_with_stdio(false);
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];a[i]*=100.00;_min=min(_min,a[i]);_max=max(_max,a[i]);}
	double ans;
	double tmp;
	double mid=0,low=0,high=_max+1;
	while(low<high-1){
		mid=(low+high)/2;
		tmp=compute(mid);
		if(tmp<k)high=mid;
		else low=mid;
	}
	printf("%.2f\n",low);
	return 0;
}
