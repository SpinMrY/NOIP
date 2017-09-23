#include<bits/stdc++.h>
using namespace std;
//define
int n[10];
//main
int main(){
	int a,b,c,f;
	for(a=123;a<=345;a++){
		f=1;
		b=2*a;
		c=3*a;
		n[a/100]++; n[a/10%10]++; n[a%10]++;
		n[b/100]++; n[b/10%10]++; n[b%10]++;
		n[c/100]++; n[c/10%10]++; n[c%10]++;
		for(int i=1;i<=9;i++){
			if(n[i]==0)f=0;
			n[i]=0;
		}
		if(f)printf("%d %d %d\n",a,b,c);
	}
	return 0;
}
