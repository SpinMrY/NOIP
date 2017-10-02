#include <bits/stdc++.h>
//稻花香里说丰年 听取WA声一片
using namespace std;
//define
int lena,lenb,len,cc[300050],a,b,c,m,aa[300050],bb[300050];
int ansa,ansp;
void fuck(){
    cout<<endl;
    cout<<"lena"<<endl;
    for(int i=1;i<=lena;i++){cout<<aa[lena]<<endl;}
    cout<<"lenb"<<endl;
    for(int i=1;i<=lenb;i++){
        cout<<bb[i]<<endl;
    }
    cout<<"lenc";
    for(int i=1;i<=len;i++){
        cout<<cc[i]<<endl;
    }
}
int cmp(int a,int b){
    return a>b;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>a>>b>>c;
    char tmp;int tmmp;
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>tmmp>>tmp;
        if(tmp=='A'||tmp=='a'){aa[++lena]=tmmp;}
        if(tmp=='B'||tmp=='b'){bb[++lenb]=tmmp;}
    }
    sort(aa+1,aa+lena+1,cmp);
    sort(bb+1,bb+lenb+1,cmp);
    for(int i=1;i<=a;i++){
        if(lena>0){ansa++,lena--,ansp+=aa[lena+1];}
        else break;
    }
    for(int i=1;i<=b;i++){
        if(lenb>0){ansa++,lenb--,ansp+=bb[lenb+1];}
    }
    for(int i=lena;i>0;i--){
        cc[++len]=aa[i];
    }
    for(int i=lenb;i>0;i--){
        cc[++len]=bb[i];
    }
    sort(cc+1,cc+len+1);
    if(len<=c){
        ansa+=len;
        for(int i=1;i<=len;i++)ansp+=cc[i];
    }
    else{
        for(int i=1;i<=c;i++){
            ansp+=cc[i];
        }ansa+=c;
    }
    cout<<ansa<<' '<<ansp<<endl;
    
    return 0;
}
