#include <cstdio>
#include <iostream>
using namespace std;
//define
bool f[2333];
int a[233];
//main
int main(){
    for (int i=1;i<=6;i++)cin>>a[i];
    for (int i=0;i<=a[1];i++)
        for (int j=0;j<=a[2];j++)
            for (int k=0;k<=a[3];k++)
                for (int l=0;l<=a[4];l++)
                    for (int m=0;m<=a[5];m++)
                        for (int n=0;n<=a[6];n++)
                            f[i+2*j+3*k+5*l+10*m+20*n]=true;
    int ans=0;
    for (int i=1;i<=1000;i++)
    if (f[i]==true) ans++;
    printf ("Total=%d",ans);
    return 0;
}
