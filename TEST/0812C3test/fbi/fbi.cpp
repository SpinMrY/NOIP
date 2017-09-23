#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;
//define
int n,a,f,b;char fbi[10050];
/*typedef struct Tree{
    struct Tree *left;
    struct Tree *right;
    char d;
    }treenode,*tree;*/
//function
int dfs(int l,int r){if(l==r){if(fbi[l]=='0')printf("B");else printf("I");return fbi[l]=='1'?1:0;}else{int ll=dfs(l,(l+r)/2),rr=dfs((l+r)/2+1,r);if(ll+rr==0){printf("B");return 0;}else if(ll+rr==2){printf("I");return 1;}else {printf("F");return 3;}}}
//main
int main(){
//    ios::sync_with_stdio(false);
    freopen("fbi.in","r",stdin);
    freopen("fbi.out","w",stdout);
    scanf("%d%s",&n,&fbi);
    dfs(0,strlen(fbi)-1);
    fclose(stdin);fclose(stdout);
    return 0;
}
