#include<iostream> 
using namespace std;
//define
const int StrengthPeriod=23;
const int FeelingPeriod=28;
const int IntelligencePeriod=33;
//main
int main(){
    int p,e,i,d; int Same=0;
    int number=0;
    cin>>p>>e>>i>>d;
    p=p%StrengthPeriod;
    e=e%FeelingPeriod;
    i=i%IntelligencePeriod;
    int m=0;
    for(m=0;m<=924;m++){
        Same=i+m*IntelligencePeriod;
            if((Same-e)%FeelingPeriod==0&&(Same-p)%StrengthPeriod==0&&Same>d)break;
    }
    cout<<Same-d<<endl;
    return 0;
}
