#include <bits/stdc++.h>
using namespace std;
//define 
int f[8][8],a[8][8],ans[8][8];
//function
void print(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=6;j++){
			cout<<ans[i][j]<<" ";
		}cout<<endl;
	}
}
void change(int x,int y){
	a[x][y-1]=!a[x][y-1];			
	a[x][y+1]=!a[x][y+1];
	a[x+1][y]=!a[x+1][y];
	a[x-1][y]=!a[x-1][y];
	a[x][y]=!a[x][y];

}
void work(int k){
	memset(ans,0,sizeof(ans));
	int tmp=1,i,j;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=6;j++){
			a[i][j]=f[i][j];
		}
	}
	while(k){
		if(k%2==1){
			a[1][tmp]=a[1][tmp]*(-1)+1;
			a[1][tmp-1]=!a[1][tmp-1];
			a[1][tmp+1]=a[1][tmp+1]*(-1)+1;
			a[2][tmp]=!a[2][tmp];
			ans[1][tmp]=1;
		}
		tmp++;k/=2;
	}
	for(i=2;i<=5;i++){
		for(j=1;j<=6;j++){
			if(a[i-1][j]==1){
				change(i,j);
				ans[i][j]=1;
			}
		}
	}
	for(j=1;j<=6;j++){
		if(a[5][j])break;
	}if(j>6)print();
}

//main
int main(){
	ios::sync_with_stdio(false);
	for(int i=1;i<=5;i++){
		for(int j=1;j<=6;j++){
			cin>>f[i][j];a[i][j]=f[i][j];
		}
	}
	for(int i=0;i<64;i++){
		work(i);
	}
	return 0;
}
