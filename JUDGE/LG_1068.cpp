
#include<iostream>
#include<algorithm>
using namespace std;
struct data{
    int num,sc;
}a[5005];
int n,m,r;
bool cmp(data a,data b)
{
    if((a.sc>b.sc)||(a.sc==b.sc&&a.num<b.num))return 1;
    else return 0;
}
int main()
{
   cin>>n>>m;
   for(int i=1;i<=n;i++)
      cin>>a[i].num>>a[i].sc;
   sort(a+1,a+n+1,cmp);
   int s=a[int(m*1.5)].sc;
   for(int i=1;i<=n;i++)
      if(a[i].sc>=s)r++;
   cout<<s<<' '<<r<<endl;
   for(int i=1;i<=r;i++)
      cout<<a[i].num<<' '<<a[i].sc<<endl;
  return 0;
}
