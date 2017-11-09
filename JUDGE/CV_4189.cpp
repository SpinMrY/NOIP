#include <bits/stdc++.h>
using namespace std;
//define
int tot=1,n,trie[200010][27];
void insert(char *s,int rt){
    for(int i=0;s[i];i++){
        int x=s[i]-'a';
        if(trie[rt][x]==0){
            trie[rt][x]=++tot;
        }
        rt=trie[rt][x];
    }
}
int find(char *s,int rt){
    for(int i=0;s[i];i++){
        int x=s[i]-'a';
        if(trie[rt][x]==0)return 0;
        rt=trie[rt][x];
    }
    return 1;
}
char s[27];
//main
int main(){
    ios::sync_with_stdio(false);
    tot=0;
    int rt=1;
    cin>>n;
    while(n--){
        cin>>s;
        insert(s,rt);
    }
    cin>>n;
    while(n--){
        cin>>s;
        if(find(s,rt))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
