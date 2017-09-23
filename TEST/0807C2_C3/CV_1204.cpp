#include <bits/stdc++.h>
using namespace std;
//define
char a[105],b[105];
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>a>>b;
    char *c=strstr(a,b);
    int ans=1+strlen(a)-strlen(c);
    cout<<ans<<endl;
    return 0;
}
