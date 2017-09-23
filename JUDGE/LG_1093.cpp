#include<stdio.h>
#include<algorithm>
using namespace std;
//define
struct node{
    int yuwen,shuxue,yingyu; 
   int num,sum;   
}student[3000];
//function
int cmp(node x,node y){
    if(x.sum!=y.sum) return x.sum>y.sum;
    if(x.yuwen!=y.yuwen) return x.yuwen>y.yuwen;
    if(x.num!=y.num) return x.num<y.num;
}
//main
int main(){
    int i,j,n,m;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d%d",&student[i].yuwen,&student[i].shuxue,&student[i].yingyu);
    student[i].num=i+1;
      student[i].sum=student[i].yuwen+student[i].shuxue+student[i].yingyu;
    }
    sort(student,student+n,cmp);
    for(i=0;i<5;i++)
        printf("%d %d\n",student[i].num,student[i].sum);
    return 0;
}
