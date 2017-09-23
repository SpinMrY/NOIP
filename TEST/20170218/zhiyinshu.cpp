#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
	int n,i;
	ios::sync_with_stdio(false);
	cin>>n;
	cout<<n<<"=";
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			n/=i;
			cout<<i--<<"*";
		}
	}
    cout<<n<<endl;
	return 0;
}
