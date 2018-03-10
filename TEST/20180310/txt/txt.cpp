#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std; 
//define
struct link{
	int back,next;
	char txt;
}a[500010];
char s[500010];
int len,i,m=0,now=0;
//main
int main(){
    freopen("txt.in","r",stdin);
    freopen("txt.out","w",stdout);
	cin>>s;
    a[0].next=1;
	len=strlen(s);
	for(i=0;i<len;i++){
        if(s[i]=='L')now=a[now].back;
        else if(s[i]=='R')now=a[now].next;
        else if(s[i]=='B'){
            if(now==0)continue;
            a[a[now].back].next=a[now].next;
            a[a[now].next].back=a[now].back;
            if(a[now].next==now)a[a[now].back].next=a[now].back;
            now=a[now].back;
        }
        else if(s[i]>='a'&&s[i]<='z'){
            a[++m].txt=s[i];
            int l=a[now].next;
            if(now==0&&a[now].next==now){
                a[m].next=m;
                a[0].next=m;
                a[m].back=0;
            }
            else if(now==0){
                a[m].next=l;
                a[l].back=0;
                a[0].next=m;
                a[m].back=0;
            }
            else if(a[now].next==now){
                a[m].next=m;
                a[m].back=now;
                a[now].next=m;
            }
            else{
                a[m].next=l;
                a[m].back=now;
                a[now].next=m;
                a[l].back=m;
            }
            now=m;
        }
    }
    for(i=a[0].next;i!=a[i].next;i=a[i].next)
        cout<<a[i].txt;
    cout<<a[i].txt;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
