#include <bits/stdc++.h>
using namespace std;
//define
int a,_min=32767,_max;
//main
int main(){
	ios::sync_with_stdio(false);
	cin>>a;int flag=0;
	if(a%2!=0){cout<<"0 0"<<endl;return 0;}
	for(int i=0;i<=a;i++){if((a-2*i)%4==0){_min=i+(a-2*i)/4;break;}}
	for(int j=0;j<=a;j++){if((a-4*j)%2==0){_max=j+(a-4*j)/2;break;}}
	cout<<_min<<" "<<_max<<endl;
	return 0;
}
