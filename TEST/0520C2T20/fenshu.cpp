#include <iostream>  
using namespace std;    
int n,a,b,p,q,x,y;    
int main(){
	ios::sync_with_stdio(false);
	cin>>n>>a>>b; 
	p=1,q=n;  
	for(x=1;x<=n;x++){  
		for(y=n;y>=1;y--){
			if(b*x<a*y&&x*q>p*y){
				p=x;q=y;
			}
		}
	} 
	cout<<p<<" "<<q<<endl;  
	return 0;  
}  
