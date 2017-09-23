#include <iostream>
#include <cstdio>
using namespace std;


int n,d;
int x[21],y[21],w[21];
const int MIN = 0;
const int MAX = 1000000;
int mw = 0,coun = 0;

void work()
{
    for(int i = 0; i <= 1024; i ++)
    {
        for(int j = 0; j <=1024; j ++)
        {
            int tem = 0;
            for(int k = 0; k <n; k++)
            {
                if(x[k]<=i+d&&x[k]>=i-d&&y[k]<=j+d&&y[k]>=j-d)
                    tem+=w[k];
            }
            if(tem>mw)
            {
                mw = tem;
                coun = 1;
            }
            else if(tem == mw)
                coun++;
        }
    }
}

int main()
{
    cin>>d;
    cin>>n;
    mw = 0;
    coun = 0;
    int minx = MAX,miny = MAX,maxx = MIN,maxy = MIN; 
    for(int i = 0; i < n; i ++)
    {
       cin>>x[i]>>y[i]>>w[i];
       //if(minx>x[i])
    }
    work();
    cout<<coun<<' '<<mw<<endl;

    return 0;
}
