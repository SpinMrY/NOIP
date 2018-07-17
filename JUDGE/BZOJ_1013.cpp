#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
double a[20][20],b[20],c[20][20];
int n;
//function

//main
int main(){
    //ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            c[i][j]=2*(a[i][j]-a[i+1][j]);
            b[i]+=a[i][j]*a[i][j]-a[i+1][j]*a[i+1][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(abs(c[j][i]>1e-8)){
                for(int k=1;k<=n;k++){
                    swap(c[i][k],c[j][k]);
                }
                swap(b[i],b[j]);
                break;
            }
        }
        for(int j=1;j<=n;j++){
            if(i==j){
                continue;
            }
            double rate=c[j][i]/(1.00*c[i][i]);
            for(int k=1;k<=n;k++){
                c[j][k]-=c[i][k]*rate;
            }
            b[j]-=b[i]*rate;
        }
    }
    double ans;
    for(int i=1;i<n;i++){
        ans=b[i]/c[i][i];
        printf("%.3f ",ans);
    }
    ans=b[n]/c[n][n];   
    printf(".3f",ans);
    return 0;
}
