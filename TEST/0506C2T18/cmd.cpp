#include <iostream>
#include <cstring>
using namespace std;
//var
int n,a[1000005],file,newa;
char cmd[5];
//function
//main
int main(){
	int count=0;
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>cmd;
		count++;
		if(strcmp(cmd,"touch")==0){
			cin>>file;
			a[file]=1;
		}
		else if(strcmp(cmd,"rm")==0){
			cin>>file;
			if(a[file]==0){
				cout<<count<<endl;
				return 0;
			}
			else{
				a[file]=0;
			}
		}
		else if(strcmp(cmd,"mv")==0){
			cin>>file>>newa;
			if(a[file]==0){
				cout<<count<<endl;
				return 0;
			}
			else{
				a[file]=0;
				a[newa]=1;
			}
		}
		else{
			cout<<count<<endl;
		}
	}
	cout<<"0"<<endl;
	return 0;
}
