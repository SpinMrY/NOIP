#include <iostream>
#include <cstdio>
using namespace std;
//var
int ans[10005];
//fun

//main
int main(){
	ios::sync_with_stdio(false);
	int N;
	ans[1]=1;ans[0]=1;ans[2]=2;
	cin>>N;
	for(int i=1;i<=N;i++){ans[i]=ans[i-1]+ans[i-2];}
	cout<<ans[N]<<endl;
	return 0;
}
