#include <bits/stdc++.h>
using namespace std;
//define
/*
struct stu{
    int num,exp;
    bool operator < (const stu &a) const{
        return exp>a.exp;
    }
};
int t,n;
struct s_que{
    priority_queue<stu>que;
    int qnum;
};
*/
int t,n,lcur=1,rcur;
struct stu{
    int index,st,end;
}stud[1005];
int ans[1005];
int cmp(stu a,stu b){
    if(a.st==b.st)return a.index<b.index;
    else return a.st<b.st;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>stud[i].st>>stud[i].end;
            stud[i].index=i;
            rcur++;
        }int wait=0,time=1;
        sort(stud+1,stud+n+1,cmp);
        for(int i=1;i<=n;i++){
            time++;
            if(stud[i].st<stud[i+1].st&&stud[i].end>=time){
                ans[stud[i].index]=time;
            }
            else if(stud[i].end<time){
                ans[stud[i].index]=0;
            }
            else if(stud[i].index>stud[i+1].index){
                ans[stud[i+1].index]=time;
                stud[i+1]=stud[i];
            }
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<' ';
        }
    }
    return 0;
}
            
