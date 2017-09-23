#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
//define
char str[100050],c[100050];
int vis[100050],len;
//function
void print(){for(int i=1;i<=len;i++)printf("%c",str[i]);printf("\n");}
void dfs(int dep){
	if(dep>len){print();return;}
	for(int i=1;i<=len;i++){
		if(vis[i]==0){
			vis[i]=1;
			str[dep]=c[i];
			dfs(dep+1);
			vis[i]=0;
		}
	}
}
//main
int main(){
	str[len+1]='\0';
	ios::sync_with_stdio(false);
	int flag=1;
	while(1){c[flag++]=getc(stdin);if(c[flag-1]=='\n')break;}
	len=flag-2;
	dfs(1);
	return 0;
}
