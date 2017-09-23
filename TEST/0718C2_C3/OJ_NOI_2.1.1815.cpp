/*
POJ 1681
*/

#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;
const int INF=0x3fffffff;
const int MAXN=1000000;
//有equ个方程，var个变元。增广矩阵行数为equ,分别为0到equ-1,列数为var+1,分别为0到var.

int a[MAXN][MAXN];//增广矩阵
int x[MAXN];//解集

int free_x[MAXN];//标记是否是不确定的变元
int free_num;//不确定变元个数

// 高斯消元法解方程组(Gauss-Jordan elimination).(-2表示有浮点数解，但无整数解，
//-1表示无解，0表示唯一解，大于0表示无穷解，并返回自由变元的个数)
//有equ个方程，var个变元。增广矩阵行数为equ,分别为0到equ-1,列数为var+1,分别为0到var.
int Gauss(int equ,int var)
{
    int i,j,k;
    int max_r;// 当前这列绝对值最大的行.
    int col;//当前处理的列
    int ta,tb;
    int LCM;
    int temp;
    int free_index;
    int num=0;
    for(int i=0;i<=var;i++)
    {
        x[i]=0;
        free_x[i]=0;
    }
    //转换为阶梯阵.
    col=0; // 当前处理的列
    for(k = 0;k < equ && col < var;k++,col++)
    {// 枚举当前处理的行.
// 找到该col列元素绝对值最大的那行与第k行交换.(为了在除法时减小误差)
        max_r=k;
        for(i=k+1;i<equ;i++)
        {
            if(abs(a[i][col])>abs(a[max_r][col])) max_r=i;
        }
        if(max_r!=k)
        {// 与第k行交换.
            for(j=k;j<var+1;j++) swap(a[k][j],a[max_r][j]);
        }
        if(a[k][col]==0)
        {// 说明该col列第k行以下全是0了，则处理当前行的下一列.
            k--;
            free_x[num++]=col;
            continue;
        }
        for(i=k+1;i<equ;i++)
        {// 枚举要删去的行.
            if(a[i][col]!=0)
            {
                for(j=col;j<var+1;j++)
                {
                    a[i][j] ^= a[k][j];
                }
            }
        }
    }

    // 1. 无解的情况: 化简的增广阵中存在(0, 0, ..., a)这样的行(a != 0).
    for (i = k; i < equ; i++)
    { // 对于无穷解来说，如果要判断哪些是自由变元，那么初等行变换中的交换就会影响，则要记录交换.
        if (a[i][col] != 0) return -1;
    }
    int stat=1<<(var-k);//自由变元有 var-k 个
    int res=INF;
    for(i=0;i<stat;i++)//枚举所有变元
    {
        int cnt=0;
        int index=i;
        for(j=0;j<var-k;j++)
        {
            x[free_x[j]]=(index&1);
            if(x[free_x[j]]) cnt++;
            index>>=1;
        }
        for(j=k-1;j>=0;j--)
        {
            int tmp=a[j][var];
            for(int l=j+1;l<var;l++)
              if(a[j][l]) tmp^=x[l];
            x[j]=tmp;
            if(x[j])cnt++;
        }
        if(cnt<res)res=cnt;
    }
    return res;
}

int n;

void init()
{
    memset(a,0,sizeof(a));
    memset(x,0,sizeof(x));
    memset(free_x, 1, sizeof(free_x));
    for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
       {
           int t=i*n+j;
           a[t][t]=1;
           if(i>0)a[(i-1)*n+j][t]=1;
           if(i<n-1)a[(i+1)*n+j][t]=1;
           if(j>0)a[i*n+j-1][t]=1;
           if(j<n-1)a[i*n+j+1][t]=1;
       }
}
char str[20];

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int T=1;
    while(T--){
        scanf("%d",&n);
        init();
        for(int i=0;i<n;i++)
        {
            scanf("%s",&str);
            for(int j=0;j<n;j++)
            {
                if(str[j]=='y')a[i*n+j][n*n]=0;
                else a[i*n+j][n*n]=1;
            }
        }
        int t=Gauss(n*n,n*n);
        if(t==-1)
        {
            printf("inf\n");
            continue;
        }
        printf("%d\n",t);
    }
    return 0;
}
