#include <bits/stdc++.h>
using namespace std;
//definef
int a[10050],n;
//function
void Qsort(int low,int high){
    if(low>=high){
        return ;
    }
    int first=low;
    int last=high;
    int key=a[first];
    while(first<last){
        while(first<last && key<=a[last])
            --last;
        a[first]=a[last];
        while(first<last && key>=a[first])
            ++first;
    }
    a[first]=key;
    Qsort(low,first-1);
    Qsort(first+1,high);
}

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    Qsort(1,n);
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
