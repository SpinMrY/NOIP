#include <iostream>
#include <cstdio>
using namespace std;

//define
const int maxn=5e5+5;
struct graph{
    int v,next;
}e[maxn<<1];
int head[maxn<<1],tot,dp[maxn],fa[maxn][25],vis[maxn],iroot[maxn],ans[maxn];
