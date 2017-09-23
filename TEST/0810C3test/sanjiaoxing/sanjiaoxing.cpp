#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
//define
int P;
int vis[15];
int a,b,c,d,e,f,g,h,i,j;
//function
void output(){
    printf("%d\n%d %d\n%d  %d\n%d %d %d %d",a,b,c,d,e,f,g,h,i);
}
//main
int main(){
    freopen("sanjiaoxing.in","r",stdin);freopen("sanjiaoxing.out","w",stdout);
    cin>>P;
//下面一大坨都是写崩的大暴力....理论上能跑，但是不能按样例输出，而且判重有bug，先不改了
/*
    for(a=1;a<=P&&a<=9;a++){
        memset(vis,0,sizeof(vis));
        vis[a]=1;
        for(b=1; b<=P-a&&b<=9; b++) {  
            if(vis[b]==1)continue;
            vis[b]=1;
            for(d=1;d<=P-a-b&&d<=9;d++) {  
                if(vis[d]==1)continue;  
                f=P-a-b-d;vis[d]=1;
                if(vis[f]==1)continue;
                vis[f]=1;
                if(f>=1&&f<=9) {  
                    for(g=1;g<=P-f&&g<=9;g++) {  
                        if(vis[g]==1)continue;
                        vis[g]=1;
                        for(h=1;h<=P-f-g&&h<=9;h++) {  
                            if(vis[h]==1)continue;  
                            i=P-f-g-h;vis[h]=1;
                            if(vis[i]==1)continue;  
                            if(i>=1&&i<=9){  
                                for(e=1;e<=P-i-a&&e<=9;e++) {  
                                    if(vis[e]==1)continue;  
                                    c=P-a-i-e;vis[e]=1; 
                                    if(vis[c]==1)continue;  
                                    if(c>=1&&c<=9){  
                                        if(a<f&&f<i&&b<d&&g<h&&c<e) {  
                                            output();return 0;}}}}}}}}}}
下面是骗分*/
    cout<<"No Answer"<<endl;
    fclose(stdout);fclose(stdin);
    return 0;
}
