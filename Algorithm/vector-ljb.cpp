#include <bits/stdc++.h>
using namespace std;
struct Graph{
    int to,w;
};

vector<Graph> g[10050];

int main(){
 	ios::sync_with_stdio(false);
    int n;
    cin>>n;
   	for(int i=1;i<=n;i++){
       	int start;Graph a;	
        cin>>start>>a.to>>a.w;
        g[start].push_back(a);	
    }	
	for(int i=1;i<=n;i++){
        for(int j=0;j<g[i].size();j++){
        	cout<<i<<' '<<j<<' '<<endl;
    	   	cout<<g[i][j].to<<' '<<g[i][j].w<<endl;
        }	
    }
   	return 0;
}
