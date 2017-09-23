#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int f[10005][10005],n[10005][10005];
int main(){
	ios::sync_with_stdio(false);
	int N=0;cin>>N;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=i;j++){
			cin>>n[i][j];
		}
	}
	for(int i=N-1;i>=1;i--){
		for(int j=1;j<=i;j++){
			n[i][j]+=max(n[i+1][j],n[i+1][j+1]);
		}
	}
	cout<<n[1][1]<<endl;
	return 0;
}
