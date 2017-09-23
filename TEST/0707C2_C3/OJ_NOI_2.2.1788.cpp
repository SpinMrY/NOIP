#include <iostream>
#include <cstdio>
using namespace std;
//define
int Pell[23333333],n,num,ans;
const int mod=32767;
//main
int main(){
	scanf("%d",&n);
	Pell[1]=1;
	Pell[2]=2;
	for(int j=1;j<=n;j++){
		scanf("%d",&num);
		for(int i=3;i<=num;i++){
			Pell[i]=(Pell[i-1]*2+Pell[i-2])%mod;
		}
		cout<<Pell[num]<<endl;
	}
	return 0;
}
