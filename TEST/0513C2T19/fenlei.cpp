#include <iostream>
using namespace std;
//var
int ans1,ans0;
//function
void check1(int t){
	int mod,a=0,b=0;
	while(t!=0){
		mod=t%2;t/=2;
		if(mod==1){
			a++;	
		}
		else{
			b++;
		}
	}
	if(a>b){
		ans1++;
	}
	else{
		ans0++;
	}
}
//main
int main(){
	ios::sync_with_stdio(false);
	for(int i=1;i<=1000;i++){
		check1(i);
	}
	cout<<ans1<<" "<<ans0<<endl;
}
