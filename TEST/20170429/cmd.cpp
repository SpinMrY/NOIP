#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#define ll long long
#define tch "touch"
#define mv "mv"
#define rm "rm"
using namespace std;
//var
string tmpa;
ll n;
ll cmd[1000010],flag=1,wrong,tmpc;
//main
int main(){
	ios::sync_with_stdio;
	cin>>n;
	while(n){
		cin>>tmpa;
		if(tmpa==rm){
			cin>>tmpc;
			cout<<"woc rm!"<<tmpc<<endl;
		}
		n--;
	}
	return 0;
}

