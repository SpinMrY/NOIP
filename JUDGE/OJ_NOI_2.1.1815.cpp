#include <bits/stdc++.h>
using namespace std;
//define
int f[20][20],n,map[20][20],ans;
//function
void change(int x,int y){
	f[x-1][y]=!f[x-1][y];
	f[x+1][y]=!f[x+1][y];
	f[x][y+1]=!f[x][y+1];
	f[x][y-1]=!f[x][y-1];
	f[x][y]=!f[x][y];
}

//main
int main(){
	ios::sync_with_stdio(false);
	cin>>n;char temp;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>temp;
			if(temp=='w')map[i][j]=0;
			else map[i][j]=1;
			f[i][j]=map[i][j];
		}
	}
	for(int i=0;i<n*n;i++){
		work(i);
	}return 0;
}
