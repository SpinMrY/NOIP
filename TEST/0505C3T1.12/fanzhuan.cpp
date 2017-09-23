#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
//var
int a[105][105];
//function
void A(int &n,int &m){
	int i,j,k,b[105][105];
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			b[j][n-i+1]=a[i][j];
	k=n;n=m;m=k;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			a[i][j]=b[i][j];
}
void B(int &n,int &m){
	A(n,m);A(n,m);A(n,m);
}
void D(int n,int m){
	int i,j,k,t;
	for(k=1;k<=m;k++){
		for(i=1,j=n;j>i;i++,j--){
			t=a[i][k];
			a[i][k]=a[j][k];
			a[j][k]=t;
		}
	}
}
void C(int n,int m){
	int i,j,k,t;
	for(k=1;k<=n;i++){
		for(i=1,j=m;j>i;i++,j--){
			t=a[k][i];
			a[k][i]=a[k][j];
			a[k][j]=t;
		}
	}
}
void tot(char c,int &n,int &m){
	if(c=='A')A(n,m);
	if(c=='B')B(n,m);
	if(c=='C')C(n,m);
	if(c=='D')D(n,m);
}
//main
int main(){
	ios::sync_with_stdio(false);
	int m,n;
	cin>>n>>m;
	char c[100];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	cin>>c;
	for(int i=0;i<strlen(c);i++){
		tot(c[i],n,m);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
