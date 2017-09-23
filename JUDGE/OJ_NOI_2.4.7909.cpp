/*#include <cstdio>
#include <cstdlib>
#include <map>
#include <string>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
//define
int N;
string index[100050];
typedef unsigned long long ull;
map<string,int> fuckmap;
//function
int cmp(string a,string b){
    ull aa,bb;
    string fuck="9999999999";
    stringstream sa,sb;
    sa<<a;sa>>aa;
    sb<<b;sb>>bb;
    cout<<"s:"<<a<<" "<<b<<endl;
    cout<<"a b!"<<aa<<" "<<bb<<endl;
    if(aa<bb){cout<<"haha "<<a<<endl;return a<fuck;}
    else return b<fuck;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>index[i];
        fuckmap[index[i]]++;
    }
    sort(index+1,index+N+1,cmp);
    for(int i=1;i<=N;i++)cout<<index[i]<<endl;
    for(int i=1;i<=N;i++){
        if(index[i]!=index[i+1]){
            cout<<index[i]<<" "<<fuckmap[index[i]]<<endl;
        }
    }
    return 0;
}脑洞大开（脑残）的产物*/
#include <iostream>
#include <algorithm>
using namespace std;
int a[1000001],s=1,i,n;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i];
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
    if(a[i]==a[i+1])
        s++;
    else{
        cout<<a[i]<<' '<<s<<'\n';
        s=1;
    }
}
