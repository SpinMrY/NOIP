#include <bits/stdc++.h>
using namespace std;
//define
char a[101],b[101];
//function
int pd(int x){
	if(x==-1)return -1;
	else if(b[x]=='$')return x;
	else return pd(x-1);
}
//main
int main(){
	ios::sync_with_stdio(false);
	while(scanf("%s",a)!=EOF){
		printf("%s\n",a);
		int n=strlen(a);
		memset(b,' ',sizeof(b));
		for(int i=0;i<=n-1;i++){
			if(a[i]=='(')b[i]='$';
			else if(a[i]==')'){
				int w=pd(i-1);
				if(w==-1){
					b[i]='?';
				}
				else{
					b[w]=' ';
				}
			}
		}
		printf("%s\n",b);
	}
	return 0;
}
