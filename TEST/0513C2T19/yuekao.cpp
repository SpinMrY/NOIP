#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
//var
int n;
struct Student{
	char name[50];
	int ch,en,mah,phy,cho;
	int id;
	int total,shuliang;
};
struct Student stu[100005];
int Ch,En,Mah,Phy,Cho;
int ansC,ansE,ansP,ansCh,ansM;
//function
int cmp(struct Student a,struct Student b){
	if(a.total!=b.total){
		return a.total>b.total;
	}else if(a.total==b.total){
		if(a.shuliang!=b.shuliang){
			return a.shuliang>b.shuliang;
		}
	}
}
//mai
int main(){
	ios::sync_with_stdio(false);
	cin>>n>>Ch>>Mah>>En>>Phy>>Cho;
	for(int i=1;i<=n;i++){
		cin>>stu[i].name>>stu[i].ch>>stu[i].mah>>stu[i].en>>stu[i].phy>>stu[i].cho;
		stu[i].id=i;
		if(stu[i].ch>=Ch){
			stu[i].shuliang++;ansC++;
		}
		if(stu[i].en>=En){
			stu[i].shuliang++;ansE++;
		}
		if(stu[i].mah>=Mah){
			stu[i].shuliang++;ansM++;
		}
		if(stu[i].phy>=Phy){
			stu[i].shuliang++;ansP++;
		}
		if(stu[i].cho>=Cho){
			stu[i].shuliang++;ansCh++;
		}
		stu[i].total=stu[i].ch+stu[i].en+stu[i].mah+stu[i].phy+stu[i].cho;
	}
	sort(stu+1,stu+n+1,cmp);
	cout<<ansC<<" "<<ansM<<" "<<ansE<<" "<<ansP<<" "<<ansCh<<" "<<endl;
	for(int i=1,rank=1;i<=n;i++,rank++){
        if(stu[i].total==stu[i-1].total&&stu[i].shuliang==stu[i-1].shuliang)rank--;
		cout<<stu[i].name<<" "<<rank<<" "<<stu[i].shuliang<<" "<<stu[i].total<<endl;
	}
	return 0;
}
