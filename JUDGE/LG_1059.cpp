#include <algorithm>
#include <iostream>
using namespace std;
//define
int n,a[10050];
int ans[10050],flag;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++){
        if(a[i]!=a[i+1])flag++;
    }
    cout<<flag<<endl;
    for(int i=1;i<=n;i++)
        if(a[i]!=a[i+1])
            cout<<a[i]<<' ';
    return 0;
}

