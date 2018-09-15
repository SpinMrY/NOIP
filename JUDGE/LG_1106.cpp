#include <iostream>
#include <cstring>
using namespace std;
//define
char a[255];int n;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>a>>n;
    int len=strlen(a);
    if(len==n){cout<<0<<endl;return 0;}
    while(n){
        int i=0;
        while(i<len&&a[i]<a[i+1])i++;
        for(int j=i;j<len;j++)a[j]=a[j+1];
        n--;
    }cout<<a<<endl;
    return 0;
}
