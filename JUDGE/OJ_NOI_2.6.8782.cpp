#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char a[50];
long long ans[50][10];
int n,k;

long long change(int x,int y){//⑨ == ⑨ char -> int
    long long ans = 0;
    for(int i = x; i <= y; i ++)
        ans = ans*10 + (a[i] - '0');
    return ans;
}

int main(){
    scanf("%d %d",&n,&k);//长度 乘号 
    for(int i = 1; i <= n; i ++){
        cin >> a[i];
        ans[i][0] = change(1,i);
    }

    for(int i = 1; i <= k; i ++)//能用的乘号们 
        for(int j = 1; j <= n; j ++)//能用的数字们 
            for(int m = 1; m <= j; m ++)//划分到当前的最优解 
                if(ans[m][i-1]*change(m+1,j) > ans[j][i])//最大值 
                    ans[j][i] = ans[m][i-1]*change(m+1,j);//更新 
    //当前数字在划分了多少次后的最优解
    //是否能被之前的所有数字中的划分之前的最优解与当前数字之积更新
    //QAQ
    printf("%d",ans[n][k]);//最终max 
    return 0;
}

//不是自己打的，回去自己重写

