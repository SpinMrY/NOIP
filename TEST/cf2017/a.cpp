#include <iostream>
#include <cstring>
using namespace std;
//define
char a[55];
int ans;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>a;
    for(int i=0;i<=strlen(a);i++){
        if(a[i]<='z'&&a[i]>='a'){
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
                ans++;
            }
        }else{
            int aa=a[i]-'0';
            if(aa%2!=0){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
