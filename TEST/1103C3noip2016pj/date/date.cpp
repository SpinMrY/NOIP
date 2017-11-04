/*#include <iostream>
1;5001;0cusing namespace std;
//define
int date1,date2,month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int ans;
//function
int judge(int d){
    cout<<d<<endl;
    int a[5],b[5],count=1;
    for(int i=1;i<=4;i++){a[5-i]=d%10;d/=10;}
    for(int i=1;i<=4;i++){b[i]=d%10;d/=10;}
    for(int i=1;i<=4;i++){if(b[i]!=a[i])return 0;}
    cout<<d<<"is qingzhen"<<endl;
    return 1;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>date1>>date2;
    if(date1==date2){cout<<judge(date1)<<endl;return 0;}
    else{
        int sy=date1/10000,ey=date2/10000;
        int sm=(date1%10000)/100,em=(date2%10000)/100;
        int sd=date1%100,ed=date2%100;
        if(sy!=ey){
            for(int i=sm;i<=12;i++){
                for(int j=sd;j<=month[sm];j++){
                    ans+=judge(sy*10000+i*100+j);
                    cout<<ans<<endl;
                }
            }
        }
    }
    return 0;
}
*/
#include<iostream>
#include<cstdio>
using namespace std;
//define
int date1,date2,md1,md2,year1,year2,ans=0;
int judge(int year, int month, int date) {
    if((month>12)||(month<1))return 0;
    if((date<1)||(date>31))return 0;
    if(month==2){
        if (date>29)return 0;
        if (date==29)if(((year%4==0)&&(year%100!=0)||(year%400==0))!=true)return 0;
    }
    else
        if((month==4)||(month==6)||(month==9)||(month==11))
            if(date==31)return 0;
    return 1;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>date1>>date2;
    year1=date1/10000;md1=date1%10000; 
    year2=date2/10000;md2=date2%10000;ans=0;int i=year1;
loop:
    int a1=i%10,a2=(i%100)/10,m=a1*10+a2,a3=(i%1000)/100,a4=i/1000;
    int d=a3*10+a4,md=m*100+d;
    if (judge(i,m,d)){
        int date=i*10000+md;
            if(date1<=date&&date<=date2)ans++;
    }
    if(i<year2){i++;goto loop;}
    cout<<ans<<endl;
    return 0;
}
