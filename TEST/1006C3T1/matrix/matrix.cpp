#include <iostream>
using namespace std;
int x,y,c,i,j,out=1,n,z;
int main(){
    ios::sync_with_stdio(false);
//  freopen("fuck","w",stdout);
    cin>>n>>x>>y;
    z=n*n;
	while(out<=z){
		i=0;j=0;
		for(i+=c,j+=c;j<n-c;j++){if(out>z)break;out++;if(i==x-1&&j==y-1){cout<<out-1<<endl;return 0;}}
		for(j--,i=i+1;i<n-c;i++){if(out>z)break;out++;if(i==x-1&&j==y-1){cout<<out-1<<endl;return 0;}}
		for(i--,j=j-1;j>=c;j--){if(out>z)break;out++;if(i==x-1&&j==y-1){cout<<out-1<<endl;return 0;}}
		for(j++,i=i-1;i>c;i--){if(out>z)break;out++;if(i==x-1&&j==y-1){cout<<out-1<<endl;return 0;}}
		c++;
	}
	return 0;
}
