#include <iostream>  
#include <cstdio> 
#include <cstring>
#include <algorithm>
using namespace std;  
int main(){  
	ios::sync_with_stdio(false);
        int t;  
        cin >> t;  
        while(t--) {  
        int n, x, ans, m = 0, a[1005], dp[1005];  
        cin >> n;  
        for(int i = 1; i <= n; ++i) {  
            cin >> a[i];  
            int j;  
            for(j = 1; j <= m; ++j)  
                if(a[i] < dp[j]) {  
                    dp[j] = a[i];  
                    break;  
                }  
                if(j > m) dp[++m] = a[i];  
            }  
            ans = m;  
            m = 0;  
            memset(dp, 0, sizeof(dp));  
            for(int i = 1; i <= n; ++i) {  
                int j;  
            for(j = 1; j <= m; ++j)  
                if(a[i] > dp[j]) {  
                    dp[j] = a[i];  
                    break;  
            } 
            if(j > m) dp[++m] = a[i];  
        } 
        ans = max(m, ans);  
        cout << ans << endl;  
    }  
    return 0;  
}  
