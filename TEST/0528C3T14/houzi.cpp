#include <iostream>
#include <cmath>
using namespace std;
//var
long long a[1000000];
//main
int main(){
	ios::sync_with_stdio(false);
	int n;cin>>n;
	a[0]=n*n+1;
	for(int i=0;i<=n;i++){
		a[i]=a[i-1]*n+1;
	}
	cout<<a[n]<<endl;
	return 0;
}
