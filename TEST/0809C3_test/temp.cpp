#include<stdio.h>
#include<math.h>
#include<string.h>

#define SIZE 1 << 6

int main () {
	
	int n;
	int a[SIZE+1][SIZE+1];
	int v[SIZE+1];	// 下标从1开始，记录某队伍该天已经比赛 
	int i,j,k,h;
	int len;
	
	scanf("%d", &n);
	memset(a,0,sizeof(a));
	len = (int)pow(2,n);	//队伍数2^n

	for(i = 0; i < len-1; i ++){	//天数 2^n-1 
		printf("<%d>",i+1);
		memset(v,0,sizeof(v));	//重置（该天每个队伍都没被访问） 
		for(j = 0; j < len/2; j ++){	//每天n场 
			for(k = 1; k <= len; k ++){		//队伍一
				if(v[k] == 1)	//该天该队伍是否已经比赛 
					continue;
				int judge = 0;	//判断k，h这两对如果比赛就跳出，今天不再会有他们的比赛 
				for(h = 1; h <= len; h ++){	//队伍一二 
					if(k == h)	  //队伍一等于队伍二跳出 
						continue;
					if(v[h] == 1)	//该天该队伍是否已经比赛
						continue;
					if(a[k][h] == 0 && a[h][k] == 0){	//h，k两队伍该天是否有一起比赛 
						printf("%d-%d ", k, h);
						v[h] = 1;	//标记h队伍今天不再比赛比赛 
						v[k] = 1;	//标记k队伍今天不再比赛比赛 
						a[k][h] = 1;	//标记h和k今天已经比赛 
						judge = 1;	//标记第j场结束，跳到下一场 
						break;
					}
				}
				if(judge == 1)	//第j场结束，跳到下一场  
					break;
			}
		/*	if(j != len/2-1)
				printf(","); */
		}	//多少场 (尾部)
		printf("\n");
	}
	
	return 0;
}
