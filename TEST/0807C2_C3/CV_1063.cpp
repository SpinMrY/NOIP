#include <bits/stdc++.h>
using namespace std;
//define
typedef long long ll;
ll x,y,ans,heap[10050],size;
//function
void fang(int n){
    heap[++size]=n;
    int now=size;
    while(now>1){
        int next=now/2;
        if(heap[now]>heap[next]) return;
        swap(heap[now],heap[next]);
        now/=2;
    }
    return;
}
int qu(){
    int res=heap[1];
    heap[1]=heap[size--];
    int now=1;
    while(now<=size/2){
        int next=now*2;
        if(next<size && heap[next+1]<heap[next])next++;
        if(heap[now]<heap[size])return res;
        swap(heap[now],heap[size]);
        now=next;
    }
    return res;
}
//main
int main(){
    ios::sync_with_stdio(false);
    int N;cin>>N;
    for(int i=1;i<=N;i++){cin>>x;fang(x);}
    N--;
    while(N--){
        x=qu();y=qu();
        ll re=x+y;
        fang(re);
        ans+=re;
    }
    cout<<ans<<endl;
    return 0;
}
