#include <bits/stdc++.h>
using namespace std;
//define
int n,a,tail,head1,head2,q[1000005];

//function
//main
int main(){
    ios::sync_with_stdio(false);
    while(~(scanf("%d %d",&a,&n))){
        tail=1;head1=1;head2=1;
        q[tail]=a;
        while(1){
            int x=q[head1]*2+1,y=q[head2]*3+1;
            if(x>y)q[++tail]=y,head2++;
            else if(x<y)q[++tail]=x,head1++;
            else if(x==y){
                q[++tail]=x;
                head1++;head2++;
            }
            if(tail>=n){
                cout<<q[n]<<endl;
                break;
            }
        }
    }
    
    return 0;
}
