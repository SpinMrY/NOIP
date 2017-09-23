#include <iostream>
#include <cstdio>
using namespace std;
//var
int ans[100005];
//fun
int solve(int x){
	if(x==0)return x;
	if(ans[x]!=0)return ans[x];
	else{return solve(x-1)+solve(x-2);}
	return 0;
}
//main
int main(){
	ios::sync_with_stdio(false);
	int N=0;
	ans[1]=1;ans[2]=2;
	cin>>N;
	cout<<solve(N)<<endl;
}
