#include <iostream>
#include <cmath>
using namespace std;
char  score[1000050];
int win=0,lost=0;
int main(){
	ios::sync_with_stdio(false);
	int count=0;
	while(1){
		cin>>score[count];
		count++;
		if(score[count-1]=='E'){count--;break;}
	}
	for(int i=0;i<count;i++){
		if(score[i]=='W')win++;
		else lost++;
		if(abs(win-lost)>=2&&(win>=11||lost>=11)){
			cout<<win<<":"<<lost<<endl;;
			win=0;lost=0;
		}
	}
	cout<<win<<":"<<lost<<endl;
	win=0;lost=0;
	for(int i=0;i<count;i++){
		if(score[i]=='W')win++;
		else lost++;
		if(abs(win-lost)>=2&&(win>=21||lost>=21)){
			cout<<win<<":"<<lost<<endl;;
			win=0;lost=0;
		}
	}
	cout<<win<<":"<<lost<<endl;
	return 0;
}
