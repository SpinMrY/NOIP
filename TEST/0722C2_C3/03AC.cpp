#include <bits/stdc++.h>
using namespace std;
//define
long long s[52850];
int c[60000],n[60000],num;
//function
int length(int x){
	int sum=0;
	while (x != 0){
		x /= 10;
		sum++;
	}
	return sum;
}
//main
int main(){
	ios::sync_with_stdio(false);
	int i=0;
	for (i = 1; i <= 52849; i++){
		n[i] = length(i);
	}
	for (i = 1; i <= 52849; i++){
		c[i] = c[i - 1] + n[i];
	}

	for (i = 1; i <= 52849; i++){
		s[i] = s[i - 1] + c[i];
	}
	int T,left,pos;
	scanf("%d", &T);
	while(T--){
		scanf("%d", &num);
		left = lower_bound(s + 1, s + 52845, num) - (s + 1);
		pos = num - s[left];
		left= lower_bound(c + 1, c + 52845, pos) - (c + 1);
		pos = pos - c[left];
		left++;
		pos = n[left] - pos +1;
		i = 1;
		while (i < pos){
			left /= 10;
			i++;
		}
		cout << left % 10<<endl;
	}
	return 0;
}

