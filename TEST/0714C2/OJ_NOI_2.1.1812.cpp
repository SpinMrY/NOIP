#include <bits/stdc++.h>
using namespace std;
//define
int N;
struct Cube{
	int a1,b1,c1,d1;
}Cube[233];
int flag=1;
//function
int cmp(struct Cube a,struct Cube b){return a.a1<b.a1;}
//main
int main(){
	scanf("%d",&N);
	for(int a=2;a<=N;a++){
		for(int b=2;b<=N;b++){
			for(int c=b;c<=N;c++){
				for(int d=c;d<=N;d++){
					if(b*b*b+c*c*c+d*d*d==a*a*a){
						Cube[flag++].a1=a;Cube[flag-1].b1=b;
						Cube[flag-1].c1=c;Cube[flag-1].d1=d;
					}
				}
			}
		}
	}
	sort(Cube+1,Cube+flag,cmp);
	for(int i=1;i<flag;i++){
		cout<<"Cube = "<<Cube[i].a1<<", Triple = ("<<Cube[i].b1<<","<<Cube[i].c1<<","<<Cube[i].d1<<")"<<endl;
	}
	cout<<flag<<endl;
	return 0;
}
