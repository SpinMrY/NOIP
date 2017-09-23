#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
//function
float f(){
	char s[10];float x;
	scanf("%s",s);
	if(s[0]>=48 && s[0]<=57){
		sscanf(s,"%f",&x);
		return x;
	}
	else{
		if(s[0]=='*')return f()*f();
		if(s[0]=='+')return f()+f();
		if(s[0]=='-')return f()-f();
		if(s[0]=='/')return f()/f();
	}
}
//main
int main(){
	ios::sync_with_stdio(false);
	printf("%f",f());
	return 0;
}
