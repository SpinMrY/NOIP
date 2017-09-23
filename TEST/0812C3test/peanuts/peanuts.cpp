#include <iostream>
#include <algorithm>
using namespace std;
//define
struct hs{int x,y,w;}a[5000];
int flag,n,m,k,ans;
//function
int cmp(struct hs aa,struct hs b){return aa.w>b.w;}
//main
int main(){
    ios::sync_with_stdio(false);
    freopen("peanuts.in","r",stdin);
    freopen("peanuts.out","w",stdout);
    cin>>m>>n>>k;int tmp;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>tmp;if(tmp!=0)a[++flag].x=i,a[flag].y=j,a[flag].w=tmp;}
    }
    sort(a+1,a+flag+1,cmp);k-=1+a[1].x;
    for(int i=1;i<=flag;i++){
        if(k-a[i].x>=0)ans+=a[i].w,k-=abs(a[i].x-a[i+1].x)+abs(a[i].y-a[i+1].y)+1;
        else break;
    }
    cout<<ans<<endl;
    fclose(stdin);fclose(stdout);
    return 0;
}
