#include <bits/stdc++.h>
using namespace std;
//define
struct peo{
    int id,index,people,age;
}people[10050];
//function
int cmp(peo a,peo b){
    if(a.age>=60 || b.age>=60){
        if(a.age==b.age){
            return a.index<b.index;
        }
        return a.age>b.age;
    }
    return a.index<b.index;
}
//main
int main(){
    ios::sync_with_stdio(false);
    int N;cin>>N;
    for(int i=1;i<=N;i++){
        cin>>people[i].id>>people[i].age;
        people[i].index=i;
    }
    sort(people+1,people+N+1,cmp);
    for(int i=1;i<=N;i++){
        printf("%06d\n",people[i].id);
    }
    return 0;
}
