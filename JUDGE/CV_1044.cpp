#include<iostream>
using namespace std;

int main()
{
	int high[21],i = 0,n = 0,j;
	int m1=1,m2=1;
	int max1[21],max2[21];;
	while(cin>>high[n])
	{
		max1[n] = 1;
		max2[n] = 1;
		n++;//统计导弹个数
	}
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(high[i] > high[j])
			{
				max1[j] = max(max1[j] , max1[i]+1);//动态规划，逐次取优。求最长的递减序列。f[j] = f[i] +j大概理解就是前面的能够拦截，如果还能继续拦截j，那么j就将全部加上之前拦截的数量。
			    m1 = max (m1,max1[j]);
			}
			else
			{
				max2[j] = max(max2[j] ,max2[i]+1); //不能依次拦截，就需要增加系统。
			    m2 = max (m2,max2[j]);
			}
		}
	}
	cout<<m1<<endl;
	cout<<m2<<endl;
	return 0;
}
//不是自己码的qwq，回去再仔细想下；
