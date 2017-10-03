#include <iostream>
using namespace std;
long long day,ans;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>day;
    int count=1,fuck=0;
    for(int i=1;i<=day;i++){
        fuck++,ans+=count;
        if(fuck==count){
            fuck=0;count++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
