#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
char a[105],b[105],c[105],n[105];
int f[105];
int main(){
	int s=0,la,lb,lc,i,j;
	gets(a);gets(b);gets(c);
	la=strlen(a);
	lc=strlen(b);
	lb=la;
	for(i=0;i<lb;i++){
		if(f[a[i]]==0){
			n[b[i]-64]=a[i];
			f[a[i]]=1;
		}
		else if(n[b[i]-64]!=a[i]){
			cout<<"Failed"<<endl;
			return 0;
		}
	}
	for(i=1;i<=26;i++){
		if(n[i]=='\0'){
			cout<<"Failed1"<<endl;
			return 0;
		}
	}
	for(i=0;i<lc;i++){
		for(j=1;j<=26;j++){
			if(c[i]==n[j]){
				cout<<(char)(j+64);
			}
		}
	}
	return 0;
}
