#include <iostream>
using namespace std;
//var
int a[105],b[105],lena,lenb;
int bing[105],jiao[105],cha[105];
int lenB,lenJ,lenC;
//main
int main(){
	ios::sync_with_stdio(false);
	cin>>lena>>lenb;
	lenB=lena;
	for(int i=1;i<=lena;i++){
		cin>>a[i];bing[i]=a[i];
	}
	for(int i=1;i<=lenb;i++){
		cin>>b[i];
	}
	int flag=0;int j=1;
	for(int i=1;i<=lenb;i++){//bing
		for(j=1;j<=lena;j++){
			if(a[j]==b[i]){
				flag=1;break;
			}
		}
		if(flag==0){
			bing[++lenB]=b[i];
		}
		flag=0;
	}
	flag=0;
	//jiao
	for(int i=1;i<=lena;i++){
		for(int j=1;j<=lenb;j++){
			if(a[i]==b[j]){
				jiao[++lenJ]=a[i];
			}
		}
	}
	//cha
	for(int i=1;i<=lena;i++){
		for(j=1;j<=lenJ;j++){
			if(a[i]==jiao[j]){
				flag=1;
			}
		}
		if(flag==0){
			cha[++lenC]=a[i];
		}
		flag=0;
	}
	//output
	cout<<lenB<<" ";
	for(int i=1;i<=lenB;i++){
		cout<<bing[i]<<" ";
	}cout<<endl;
	cout<<lenJ<<" ";
	for(int i=1;i<=lenJ;i++){
		cout<<jiao[i]<<" ";
	}cout<<endl;
	cout<<lenC<<" ";
	for(int i=1;i<=lenC;i++){
		cout<<cha[i]<<" ";
	}cout<<endl;
	return 0;
}
