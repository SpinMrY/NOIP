#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[100200];
int mid,tot=0,l=0,r;
void init() {
	scanf("%d%d", &n, &m);
	for (int i=1;i<=n;i++) {
		scanf("%d",&a[i]);
		tot+=a[i];
	}
	r = tot;
}
int check(int x) {// 比m多 return 1
	int k=0;
	int p=0;
	for (int i=1;i<=n;i++) {
		k+=a[i];
		if (k>=x) {
			p++;
			if (a[i]<x)
			k=a[i]; else {return 1;/*k=0;p++;*/}//fix不允许有分组大于mid的 
		}
	}
	return p>=m;
}
void go() {
	while (l+1<r) {
		mid = (l+r)/2;
		if (check(mid)) l=mid; else r=mid;
	}
	printf("%d", l);
}
int main() {	
	init();
	go();
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
//define
int tot,mid,l,r,n,m;
int a[1000005],ans,_max;
//function
int check(int x){
    int k=0,p=0;
    for(int i=1;i<=n;i++){
        k+=a[i];
        if(k>=x){
            p++;
            if(a[i]<x)k=a[i];
            else return 1;
        }
    }
    return p>=m;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];tot+=a[i];
    }r=tot;
    while(l+l<r){
        mid=(l+r)/2;
        if(check(mid))l=mid;
        else r=mid;
    }
    cout<<l<<endl;
    return 0;
}
