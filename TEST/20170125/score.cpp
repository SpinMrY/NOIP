#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
struct Zhiyuanzhe{
    int num,score;
}a[5010];
int n,m,flag=0;
bool paixu(Zhiyuanzhe a,Zhiyuanzhe b);
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    //scanf("%d%d",n,m);
    for(int i=0;i<n;i++){
        cin>>a[i].num>>a[i].score;
        //scanf("%d%d",&a[i].num,&za[i].score);
    }
    sort(a,a+n,paixu);
    int temp=floor(m*1.5);
    int jihua=a[temp].score;
    for(int i=0;i<n;i++){
        if(a[i].score>=jihua)flag++;
    }
    cout<<jihua<<" "<<flag<<endl;
    for(int i=0;i<flag;i++){
        cout<<a[i].num<<" "<<a[i].score<<endl;
    }
    return 0;
}
bool paixu(Zhiyuanzhe a,Zhiyuanzhe b){
    if((a.score>b.score)or(a.score==b.score and a.num<b.num))return 1;
    if((a.score<b.score)or((a.score==b.score and a.num>=b.num)))return 0;
    return a.score<b.score;
}