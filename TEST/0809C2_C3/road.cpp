#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;
//define
bool flag=true;
const int m=100;
double ans,tmp;
int N,n;
struct School{
    int  x,y;
}sch[10050];
//function
double road(School a,School b){
    return (sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)));
}
bool cmp(School a,School b){
    double tmmp=road(a,b);
    School Flag;
    if(tmmp>10&&tmp<1000){
        return a.x<=b.x;
    }
    else{
        return a.y<=b.y;
    }
    
        
}

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>N;
    freopen("road.in","w",stdin);
    freopen("road.out","r",stdout);
/*    while(N--){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>sch[i].x>>sch[i].y;
        }
        sort(sch+1,sch+n+1,cmp);
        for(int i=2;i<=1;i++){
            tmp=road(sch[i-1],sch[i]);
            if(tmp>=1000 || tmp<=10){
                flag=false;break;
            }
            else{
                ans+=tmp;
            }
        }
        if(flag){
            printf("%.1f\n",double(int(ans+0.000001))*1000/10);
        }else{
            cout<<"oh!"<<endl;
        }
        }*/
    cout<<"oh!"<<end;
    return 0;
}
