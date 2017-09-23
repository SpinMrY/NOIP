/*#include <bits/stdc++.h>
using namespace std;
//define
int ans,mem[150],word[2050],m,n,last,dx;
//fun
int search(int w){
    if(dx==0){ans++,mem[++last]=w;dx++;}
    else{
        for(int i=1;i<=m;i++){
            if(mem[i]==w)return 1;
        }
        ans++;
        if(last<m)mem[++last]=w;
        else mem[1]=w,last=1;
    }
    return 1;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>m>>n;
    for(int i=1;i<=n;i++)word[i]=-1;
    for(int i=1;i<=n;i++){
        cin>>word[i];
    }
    for(int i=1;i<=n;i++){
        search(word[i]);
    }
    cout<<ans<<endl;
    return 0;
    }*/
#include<iostream>
using namespace std;
int m,n,head=1,tail=1,x,sum=0,order=1;
int a[2005];
int main(){
    ios::sync_with_stdio(false);
    cin>>m>>n;
    for(int i=0;i<1005;i++)a[i]=-1;
    for(int i=1;i<=n;i++){
        cin>>x;
        for(int j=head;j<tail;j++){
            if(a[j]==x){
                order=0;
                break;
            }
        }
        if(order){
            a[tail]=x;
            sum++;tail++;
            if(tail-head>m)head++;
        }
        order=1;
    }
    cout<<sum;
    return 0;
}
