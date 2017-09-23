#include <bits/stdc++.h>
using namespace std;
//main
int main(){
	int n1,n2,n3,n4,n5,a,s1,s2,s3,s4,s5;
	scanf("%d %d %d %d %d %d",&a,&n1,&n2,&n3,&n4,&n5);
	a*=100;
	for(int k=1;k<=a;k++){
		for(int i=1;i<=k;i++){
	  		s1=i;
			s2=k-n1*s1; s3=k-s2*n2; s4=k-s3*n3; s5=k-s4*n4; 
			if(s1==s2||s1==s2||s1==s3||s1==s4||s1==s5||s2==s3||s2==s4||s2==s5||s3==s4||s3==s5||s4==s5||s1<=0||s2<=0||s3<=0||s4<=0||s5<=0)continue;
			if(s5*n5+s1==k){
				printf("%d %d %d %d %d %d\n",k,s1,s2,s3,s4,s5);
				return 0;
			}
		}
	} 
	printf("not found\n");
	return 0;
}
