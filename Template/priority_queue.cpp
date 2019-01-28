// luogu-judger-enable-o2
#include <iostream>
#include <queue>
using namespace std;

//define
int x,a,b;
priority_queue<int,vector<int>,greater<int> >q;

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>x;
    while(x--){
        cin>>a;
        if(a==1)cin>>b,q.push(b);
        else if(a==2)cout<<q.top()<<endl;
        else q.pop();
    }
    return 0;
}
