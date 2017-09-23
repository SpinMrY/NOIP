#include <bits/stdc++.h>
using namespace std;
//define
int a[15][15],ans,mina=65535,b[15][15];
//function
void print(int r,int c){
    printf("try %d:(%d,%d)\n",ans,r,c);
    for(int r=1;r<=4;r++)
    {
        for(int c=1;c<=4;c++)
            printf("%d",b[r][c]);
        puts("");
    }
}
void filp(int r,int c){
    ans++;
    b[r][c]=!b[r][c];
    if(r!=1)b[r-1][c]=!b[r-1][c];
    if(r!=4)b[r+1][c]=!b[r-1][c-1];
    if(c!=1)b[r][c-1]=!b[r][c-1];
    if(c!=4)b[r][c+1]=!b[r][c+1];
    print(r,c);
}
//main
int main(){
    char input;
    ios::sync_with_stdio(false);
    for(int r=1;r<=4;r++){
        for(int c=1;c<=4;c++){
            cin>>input;
            a[r][c]=(input=='b'?1:0);
        }
    }
/*  for(int r=1;r<=4;r++){
        for(int c=1;c<=4;c++){
            cout<<a[r][c];
        }
        cout<<endl;
    }*/
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            for(int k=0;k<=1;k++){
                for(int l=0;l<=1;l++){
                    memcpy(b,a,sizeof(a));
                    int flag=1;
                    ans=0;
                    if(i)filp(1,1);
                    if(j)filp(1,2);
                    if(k)filp(1,3);
                    if(l)filp(1,4);
                    for(int r=1;r<=3;r++){
                        for(int c=1;c<=4;c++){
                            if(!b[r][c])filp(r+1,c);
                        }
                    }
                    for(int r=1;r<=4;r++){
                        for(int c=1;c<=4;c++){
                            if(!b[r][c])flag=0;
                        }
                    }
                    if(flag)mina=min(ans,mina);
                }
            }
        }
    } 
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            for(int k=0;k<=1;k++){
                for(int l=0;l<=1;l++){
                    memcpy(b,a,sizeof(a));
                    int flag=1;
                    ans=0;
                    if(i)filp(1,1);
                    if(j)filp(1,2);
                    if(k)filp(1,3);
                    if(l)filp(1,4);
                    for(int r=1;r<=3;r++){
                        for(int c=1;c<=4;c++){
                            if(b[r][c])filp(r+1,c);
                        }
                    }
                    for(int r=1;r<=4;r++){
                        for(int c=1;c<=4;c++){
                            if(b[r][c])flag=0;
                        }
                    }
                    if(flag)mina=min(ans,mina);
                }
            }
        }
    }
    if(mina>=100)cout<<"Impossible";
    else cout<<mina;
    return 0;
}
