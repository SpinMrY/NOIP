#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
//var
int a[105]={-1},ans,N,M,now;
int step;
//function
void find(int nowa){
	int i=1;
	for(i=1;i<=M;i++){
		if(nowa==a[i]){
			break;
		}
	}
	if(i>M){
		ans++;
		a[step]=nowa;
		step++;
		if(step>M){
			step=1;
		}
	}
}
//main
int main(){
	ios::sync_with_stdio(false);
	cin>>M>>N;int temp;
	for(int i=0;i<105;i++){
		a[i]=-1;
	}
	for(int j=1;j<=N;j++){
		cin>>temp;
		find(temp);
	}
	cout<<ans<<endl;
	return 0;
}
