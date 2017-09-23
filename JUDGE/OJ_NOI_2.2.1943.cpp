#include <bits/stdc++.h>
using namespace std;
//main
int main(){
	ios::sync_with_stdio(false);
	for(int a=1;a<=100;a++){
		for(int b=a;b<=100;b++){
			for(int c=1;c<=100;c++){
				if(a*a+b*b==c*c){
					printf("%d*%d + %d*%d = %d*%d\n",a,a,b,b,c,c);}
				}
		}
	}
	return 0;
}
