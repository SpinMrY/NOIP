#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

//define
const int maxn=400010;
int n,m,cnt=1,root=1,trie[26][maxn],label[maxn],vis[maxn];
int cur,T;
char s[55];

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s+1;
        cur=root;
        for(int j=1;j<=strlen(s+1);j++){
            if(!trie[s[j]-'a'][cur])
                trie[s[j]-'a'][cur]=++cnt;
            cur=trie[s[j]-'a'][cur];
        }
        label[cur]=i;
    }
    cin>>T;
    while(T--){
        cin>>s+1;
        cur=root;
        for(int i=1;i<=strlen(s+1);i++){
            cur=trie[s[i]-'a'][cur];
        }
        if(label[cur]){
            if(vis[cur])cout<<"REPEAT"<<endl;
            else cout<<"OK"<<endl;
            vis[cur]=1;
        }
        else
            cout<<"WRONG"<<endl;
    }
    return 0;
}
