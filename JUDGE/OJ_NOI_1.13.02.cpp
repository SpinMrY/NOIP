/*
#include <bits/stdc++.h>
using namespace std;
//define
int m[16]={0,13,44,72,102,133,163,194,225,255,286,316,347};
int w,flag=1;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>w;
    for(int i=1;i<=12;i++){
        if((m[i]+w-1)%7==5)
            cout<<i<<endl;
    }
    return 0;
}
*/
#include<iostream>
using namespace std;
int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};		
int main(){
	int day_num[12] = {0};
	day_num[0] = 13;
	for(int i=1;i<12;++i)
		day_num[i]=day_num[i-1]+day[i-1];
	int week_day = 0;
	cin>>week_day;
	for(int j=0;j<12;++j)
		if (6==(day_num[j]+week_day)%7)
			cout<<j+1<<endl;
	return 0;
}
