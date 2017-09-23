#include <bits/stdc++.h>
using namespace std;
//define
int n;
struct student{
    string name;
    int sc;
}stu[25];
//function
int cmp(student a,student b){
    if(a.sc!=b.sc){
        return a.sc>b.sc;
    }
    else{
        return a.name<b.name;
    }
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>stu[i].name>>stu[i].sc;
    }
    sort(stu+1,stu+n+1,cmp);
    for(int i=1;i<=n;i++){
        cout<<stu[i].name<<" "<<stu[i].sc<<endl;
    }
    return 0;
}
