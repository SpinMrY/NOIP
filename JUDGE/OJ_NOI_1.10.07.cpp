#include <bits/stdc++.h>
using namespace std;
//define
int n,l,r;
float a[41],b[41],c[41];
//main
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        string k;
        cin>>k>>a[i];
        if(k=="male") {
            l++;
            b[l]=a[i];
        }
        if(k=="female"){
            r++;
            c[r]=a[i];
        }
    }
    sort(b+1,b+l+1);
    sort(c+1,c+r+1);
    for(int i=1;i<=l;i++)
      printf("%.2f ",b[i]);
    for(int i=r;i>0;i--)
      printf("%.2f ",c[i]);
     return 0; 
}
