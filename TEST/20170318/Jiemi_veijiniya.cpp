#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int i,j,lm,lk;
char k[101],m[1001];
int main(){
	//ios::sync_with_stdio(false);
	scanf("%s%s",k,m);
	//cout<<"ENDL"<<endl;
	lm=strlen(m);lk=strlen(k);
	for(i=0;i<lk;i++){
		if('A'<=k[i]&&'Z'>=k[i])k[i]+=32;
	}
	for(i=0;i<lm;i++){
		//cout<<"1"<<endl;
		for(j=0;j<lk;j++){
			if(i>lm)break;
			else if('A'<=m[i]&&m[i]<='Z'&&m[i]-k[j]+'a'<'A'||'a'<=m[i]&&m[i]<='z'&&m[i]-k[j]+'a'<'a'){
				m[i]=m[i]-(k[j]-'a')+26;
			}
			else{
				m[i]=m[i]-k[j]+'a';
			}
		}
		i--;
	}
	puts(m);
	return 0;
}
