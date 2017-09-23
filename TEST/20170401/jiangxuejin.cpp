#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct student{
	int id;
	int c;
	int total;
};
struct student st[1000];

int cmp(struct student a,struct student b){
	if(a.total!=b.total){
		return a.total>b.total;
	}
	else{
		if(a.c!=b.c){
			return a.c>b.c;
		}
		else{
			if(a.id!=b.id){
				return a.id<b.id;
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	int n,temp1,temp2;
	cin>>n;
	for(int i=0;i<n;i++){
		st[i].id=i+1;
		scanf("%d %d %d",&st[i].c,&temp1,&temp2);
		st[i].total=st[i].c+temp1+temp2;
	}
	stable_sort(st,st+n,cmp);
	cout<<st[0].id<<" "<<st[0].total<<endl;
	cout<<st[1].id<<" "<<st[1].total<<endl;
	cout<<st[2].id<<" "<<st[2].total<<endl;
	cout<<st[3].id<<" "<<st[3].total<<endl;
	cout<<st[4].id<<" "<<st[4].total<<endl;
	return 0;
}
