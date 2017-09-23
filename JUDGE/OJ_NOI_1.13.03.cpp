#include <bits/stdc++.h>
using namespace std;
//define
const int BASE10 = 10;
const int BASE8 = 8;
const int MAXN = 1024;
char s[1050];
int ans[1050];
//main
int main(void){
    int len, digit, t, j, k;
    t = 0;cin>>s;
    len = strlen(s);
    for(int i=len-1;i>1;i--){
        digit = s[i] - '0';
        j = 0;k = 0;
        while(j<t || digit) {
            digit = digit * BASE10 + ans[j++];
            ans[k++] = digit / BASE8;
            digit %= BASE8;
        }
        t=k;
    }
    cout<<s<<" [" << BASE8 << "] = 0.";
    for(int i=0;i<t;i++)
        cout<<ans[i];
    cout << " [" << BASE10 << "]" << endl;
    return 0;
}

