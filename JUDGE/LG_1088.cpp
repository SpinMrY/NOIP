#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
//define
int n,m,a[10050];
//main
int main(){
    ios::sync_with_stdio(false);
    freopen("martian.in","r",stdin);
    freopen("martian.out","w",stdout);
    cin>>n>>m;for(int i=1;i<=n;i++){cin>>a[i];}
    for(int i=1;i<=m;i++)next_permutation(a+1,a+n+1);
    int out=1;while(out<=n){cout<<a[out]<<' ';out++;}
//    fclose(stdin);fclose(stdout);
    return 0;
}

