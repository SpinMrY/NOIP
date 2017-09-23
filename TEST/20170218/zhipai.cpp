#include <iostream>
using namespace std;
int a[10000];
int main(){
	int n,he,pingjun;
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		he+=a[i];
	}
	he/=n;
	int result=0;int m;
	for(int i=0;i<n;i++){
		if(a[i]==he)continue;
		m=a[i]-he;
		a[i+1]+=m;
		a[i]-=m;
		result++;
	}
	cout<<result<<endl;
	return 0;
}
