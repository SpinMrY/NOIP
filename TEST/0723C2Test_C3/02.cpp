#include <bits/stdc++.h>
using namespace std;
//define
const int n=4;
int ansb,answ,ansbf,answf,_map[5][5],f[5][5],fb[5][5],_mapB[5][5];
//function
void _output();
#define FUCKYOU _output();cout<<endl;
void press(int x,int y){
    _map[x][y]=!_map[x][y];
    _map[x-1][y]=!_map[x-1][y];
    _map[x+1][y]=!_map[x+1][y];
    _map[x][y-1]=!_map[x][y-1];
    _map[x][y+1]=!_map[x][y+1];
    FUCKYOU
}
bool checklast(){
    for(int j=1;j<=4;j++){
        if(_map[4][j]=0)
            return false;
    }
    return true;
}
bool checklastF(){
    for(int i=1;i<=4;i++){
        if(_map[i][4]=0)
            return false;
    }
    return true;
}
void _output(){ 
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<_map[i][j]<<" ";
        }cout<<endl;
    }
}
//main
int main(){
    ios::sync_with_stdio(false);
    char temp;
    for(int i=1;i<=4;i++)
        for(int j=1;j<=4;j++){
            cin>>temp;
            if(temp=='b'){_map[i][j]=1;_mapB[i][j]=1;f[i][j]=0;fb[i][j]=0;}
            if(temp=='w'){_map[i][j]=0;_mapB[i][j]=0;f[i][j]=1;fb[i][j]=0;}
        }
    //quan shi b
    for(int j=2;j<=3;j++){
        for(int i=1;i<=4;i++){
            if(_map[i][j-1]==0){
                press(i,j);ansb++;
            }
        }
    }bool flag;
    for(int i=1;i<=4;i++){
        if(_map[i][3]==0){
            press(i,4);ansb++;
        }
        if(i==4){
            flag=checklast();
            if(flag==false){
                ansb=65535;
            }
        }
    }ansb--;
    //cout<<"ansb"<<ansb<<endl;
    //fan zhuan quan shi b
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            _map[i][j]=_mapB[i][j];
        }
    }
    for(int i=2;i<=3;i++){
        for(int j=1;j<=4;j++){
            if(_map[i-1][j]==0){
                press(i,j);ansbf++;
            }
        }
    }
    for(int j=1;j<=4;j++){
        if(_map[3][j]==0){
            press(4,j);ansbf++;
        }
        if(j==4){
            flag=checklastF();
            if(flag==false){
                ansbf=65535;
            }
        }
    }ansbf--;
    //cout<<"ansFb"<<ansbf<<endl;
    //quan shi w
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            _map[i][j]=f[i][j];
        }
    }
    for(int j=2;j<=3;j++){
        for(int i=1;i<=4;i++){
            if(_map[i][j-1]==0){
                press(i,j);answ++;
            }
        }
    }
    for(int i=1;i<=4;i++){
        if(_map[i][3]==0){
            press(i,4);answ++;
        }
        if(i==4){
            flag=checklast();
            if(flag==false){
                answ=65535;
            }
        }
    }answ--;
    //cout<<"answ"<<answ<<endl;
    //fan zhuan quan shi w
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            _map[i][j]=fb[i][j];
        }
    }
    for(int j=2;j<=3;j++){
        for(int i=1;i<=4;i++){
            if(_map[i][j-1]==0){
                press(i,j);answf++;
            }
        }
    }
    for(int i=1;i<=4;i++){
        if(_map[i][3]==0){
            press(i,4);answf++;
        }
        if(i==4){
            flag=checklastF();
            if(flag==false){
                answf=65535;
            }
        }
    }answf--;
    //cout<<"answF"<<answf<<endl;
    if(answf==65535&&answ==65535&&ansbf==65535&&ansb==65535)
        cout<<"Impossible"<<endl;
    else
        cout<<min(answ,min(answf,min(ansbf,ansb)))<<endl;
    return 0;
}
