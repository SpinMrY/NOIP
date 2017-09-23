#include <iostream>
#include <cstdio>
#include <cstring>
int flen,plen;
char find[100],passage[1000000];
void strupr(){
	flen=strlen(find);plen=strlen(passage);
	for(int i=0;i<=flen;i++){
		find[i]=tolower(find[i]);
	}for(int j=0;j<=plen;j++){
		passage[j]=tolower(passage[j]);
	}
}
int panduan(int a){
	int start=a;
	for(int i=0;i<flen;i++,start++){
		if(find[i]!=passage[start])return 0;
	}
	return 1;
}
int main(){
	std::ios::sync_with_stdio(false);
	fgets(find,100,stdin);fgets(passage,1000000,stdin);
	strupr();
	int count=0,first=0;
	for(int i=0;i<plen;i++){
		if(i==0&&passage[i+flen]==' '){
			if(panduan(i)){
				count++;
				if(!first)first=i;
			}
		}
	}
	if(!count)std::cout<<-1<<std::endl;
	else std::cout<<" "<<first<<std::endl;
	return 0;
}
