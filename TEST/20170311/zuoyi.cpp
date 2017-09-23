#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
using namespace std;
struct classroom{
	int id,student;
};
struct classroom wide[2005],line[1005];
bool c1(classroom a,classroom b){
	return a.student>b.student;
}
bool c2(classroom a,classroom b){
	return a.id<b.id;
}
int main(){
	int m,n,k,l,d;
	cin>>m>>n>>k>>l>>d;
	for(int i=1;i<=m;i++){
		line[i].id=i;line[i].student=0;
	}
	for(int i=1;i<=n;i++){
		wide[i].id=i;wide[i].student=0;
	}
	for(int i=1;i<=d;i++){
		int x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		if(x1==x2){
			wide[min(y1,y2)].student++;
		}
		else{
			line[min(x1,x2)].student++;
		}
	}
	sort(wide+1,wide+n+1,c1);
	sort(line+1,line+m+1,c1);
	sort(wide+1,wide+l+1,c2);
	sort(line+1,line+k+1,c2);
	for(int i=1;i<=k;i++){
		cout<<line[i].id<<" ";
	}
	cout<<endl;
	for(int i=1;i<=l;i++){
		cout<<wide[i].id<<" ";
	}
	return 0;
}
