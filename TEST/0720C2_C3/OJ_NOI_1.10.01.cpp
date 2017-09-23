#include <bits/stdc++.h>
using namespace std;
//define
struct student{
    int hao;
    double chengji;
}stu[105];
int n;
//cmp
int cmp(student a,student b){
    return a.chengji>b.chengji;
}
//main
int main(){
    ios::sync_with_stdio(false);
    int k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>stu[i].hao>>stu[i].chengji;
    }
    sort(stu+1,stu+n+1,cmp);
    cout<<stu[k].hao<<" "<<stu[k].chengji<<endl;
    return 0;
}
