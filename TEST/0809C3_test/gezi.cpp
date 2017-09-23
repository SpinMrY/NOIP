//极限压行23333333
#include <bits/stdc++.h>
int xi,yi,N,i,j;void print(int x,int y){printf("(%d,%d)",x,y);return;}
void check(int x,int y){if(x>0&&y>0&&x<=N&&y<=N)print(x,y);return;}
int main(){
    scanf("%d%d%d",&N,&i,&j);
    for(int a=1;a<=N;a++)check(i,a);printf("\n");
    for(int a=1;a<=N;a++)check(a,j);printf("\n");
    xi=i,yi=j;while(xi>1&&yi>1)xi--,yi--;while(xi<=N&&yi<=N)check(xi,yi),xi++,yi++;printf("\n");
    xi=i,yi=j;while(xi<N&&yi>1)xi++,yi--;while(xi>=1&&yi<=N)check(xi,yi),xi--,yi++;
    return 0;
}
