#include<bits/stdc++.h>
using namespace std;
//define
int a[100010]={0},L[100010]={0},R[100010]={0};
long long ans=0;
const long long M=1000000000;
//function
void merge(int left,int mid,int right){
    int ll=mid-left+1; 
    int lr=right-mid;
    for (int i=1;i<=ll;i++)
        L[i]=a[left+i-1];
    for(int i=1;i<=lr;i++)
        R[i]=a[mid+i];
    L[ll+1]=M;
    R[lr+1]=M;
    int l=1,r=1;
    for (int i=left; i<=right;i++){
        if (L[l]<=R[r]){
            a[i]=L[l];
            l++;
        }
        else{
          a[i]=R[r];
          r++;
          ans+=ll-l+1;
        }
    }
}
void mergesort(int left,int right){
    int mid=(left+right)/2;
    if (left<right){
        mergesort(left,mid);
        mergesort(mid+1,right);
        merge(left,mid,right);
   }    
}
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
        scanf("%d",&a[i]);
    mergesort(1,n);
    printf("%lld",ans);
    return 0;
}
