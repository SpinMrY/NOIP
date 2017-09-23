#include <bits/stdc++.h>
using namespace std;
//define
int n;
struct student{
    int hao,yw,sx,yy,zong;
}stu[305];
//function
int cmp(student a,student b){
    if(a.zong!=b.zong)
        return a.zong>b.zong;
    else{
        if(a.yw!=b.yw)
            return a.yw>b.yw;
        else{
            if(a.sx!=b.sx)
                return a.sx>b.sx;
            else{
                if(a.yy!=b.yy)
                    return a.yy>b.yy;
                else
                    if(a.hao!=b.hao)
                        return a.hao<b.hao;
            }
        }
    }
}       
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        stu[i].hao=i;
        cin>>stu[i].yw>>stu[i].sx>>stu[i].yy;
        stu[i].zong=stu[i].yw+stu[i].sx+stu[i].yy;
    }
    sort(stu+1,stu+1+n,cmp);
    for(int i=1;i<=5;i++){
        cout<<stu[i].hao<<' '<<stu[i].zong<<endl;
    }
    
    return 0;
}
