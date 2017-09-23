#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char a[105],b[1005];
int chuli(char a){
	int ans;
	if(a>='a'&&a<='z'){ans=a-'a'+1;/*cout<<ans<<endl*/;return ans;}
	else{ans=a-'A'+1;/*cout<<ans<<endl*/;return ans;}
}
int jiemi(char a,int k){
	char tmp;
	if(a>='a'&&a<='z'){tmp='z';}
	else if(a>='A'&&a<='Z'){tmp='Z';}
	
	int tmpa=chuli(a);
	int ans=tmpa-k+2;

	if(ans>26){ans-=26;}
	if(tmp=='z'){
		ans+=95;
	}
	if(tmp=='Z'){
		ans+=63;
	}
	return ans;
}
int main(){
	ios::sync_with_stdio(false);
	cout<<"TEST"<<(int)('p'-'g')<<endl;
	cin>>a>>b;
	int la,lb;
	la=strlen(a);
	lb=strlen(b);
	int temp=0;
	for(int i=la;i<lb;i++){
		if(temp<la){
			a[i]=a[temp++];
		}
		else{
			temp=0;
			a[i]=a[temp++];
		}
	}
	for(int i=0;i<lb;i++){
		int passwd=chuli(a[i]);
		char pwa=jiemi(b[i],passwd);
		cout<<pwa;
	}
	cout<<endl;
	return 0;
}
