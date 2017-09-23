#include <iostream>
#include <cstdio>
using namespace std;
void move(int n,char a,char b,char c){
	if(n==1){
		printf("%c->%d->%c\n",a,n,b);
	}
	else{
		move(n-1,a,c,b);
		printf("%c->%d->%c\n",a,n,b);
		move(n-1,c,b,a);
	}
}
int main(){
	int N;
	char a,b,c;
	scanf("%d %c %c %c",&N,&a,&b,&c);
	move(N,a,b,c);
	return 0;
}
