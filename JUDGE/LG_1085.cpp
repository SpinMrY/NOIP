#include <iostream>
using namespace std;
//var
int a,maxn,ans,ta,tb;
//main
int main(){
	ios::sync_with_stdio;
	for(int i=0;i<7;i++){
		cin>>ta>>tb;
		a=ta+tb;
		if(a>=8&&a>maxn){
			maxn=a;
			ans=i+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
