#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

//define
const int maxn=1e5+5;
int a[maxn],n;

void quicksort(int a[],int low,int high){
    if(low>=high)return ;
    int first=low,last=high,key=a[first];
    while(first<last){
        while(first<last&&a[last]>=key)--last;
        a[first]=a[last];
        while(first<last&&a[first]<=key)++first;
        a[last]=a[first];
    }
    a[first]=key;
    quicksort(a,low,first-1);
    quicksort(a,first+1,high);
}

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(register int i=1;i<=n;++i)cin>>a[i];
    quicksort(a,1,n);
    for(register int i=1;i<=n;++i)cout<<a[i]<<' ';
    return 0;
}
