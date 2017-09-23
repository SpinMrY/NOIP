#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool camp(string a,string b){
    return a+b<b+a;
}
string input[25];
int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>input[i];
        cout<<input[i]<<endl;
    }
    sort(input,input+n,camp);
    for(int i=0;i<n;i++){
        cout<<input[i]<<endl;
    }
    for(int i=n;i>=0;i--){
        cout<<input[i];
    }
    return 0;
}