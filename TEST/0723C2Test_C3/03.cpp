#include <bits/stdc++.h>
using namespace std;
//define
#define INF 0x3f3f3f3f
int N,P,i,j,Q1,Q2,Qmin,Qmax,ans,h;
int to[1005];
struct node{
	int start;
	int end;

}node_one[10005];
//function
bool cmp(node node1,node node2){
	if(node1.start == node2.start)
		return node1.end< node2.end;
	
	return node1.start<node2.start;
}
//main
int main(){
	cin>>N>>P;
	for(i=1;i<=P;i++){
		cin>>Q1>>Q2;
		node_one[i].start = min(Q1,Q2);
		node_one[i].end = max(Q1,Q2);
	}
	sort(node_one+1,node_one+P+1,cmp);
	ans=INF;
	for(i=1;i<=N;i++){
		memset(to,0,sizeof(to));
		for(j=1;j<=P;j++){
			if(node_one[j].end>=i+1 && node_one[j].start<=i){
				to[1]=max(to[1],node_one[j].start);
				to[node_one[j].end]=N+1;
			}
			else{
				to[node_one[j].start]=max(to[node_one[j].start],node_one[j].end);
			}
		}
		int duandian=0,result=0;
		for(j=1;j<=N;j++){
			if(to[j]==0)continue;
			if(to[j]>duandian){
				if(j>=duandian){
					result+=(to[j]-j);
				}
				else{
					result+=(to[j]-duandian);
				}
				duandian=to[j];
			}
		}
		ans=min(ans,result);
	}
	cout<<ans<<endl;
	return 0;
}
