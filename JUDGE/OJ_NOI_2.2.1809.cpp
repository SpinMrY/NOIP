#include <bits/stdc++.h>
using namespace std;
//define
int tong[105],ans;
//main
int main(){
	ios::sync_with_stdio(false);
	int temp=0;int n;
	while(scanf("%d",&temp)){if(temp==0){break;}tong[temp]=1;}
	for(int i=1;i<=50;i++){
		if(tong[i]==1&&tong[i*2]==1){ans++;}
	}
	cout<<ans<<endl;
	return 0;
}
