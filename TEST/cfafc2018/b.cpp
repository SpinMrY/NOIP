#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
#define For(a,b,c) for(int a=b;a<=c;a++)
//define
int n;
//function

//main
int main(){
    for(int i=0;i<=9;i++){
        printf("%d",i);
        fflush(stdout);
        string aaa;
        cin>>aaa;
        fflush(stdin);
        if(aaa=="worse"||aaa=="terrible"||aaa=="go die in a hole"){
            printf("grumpy");        fflush(stdout);
            return 0;
        }
        if(aaa=="cool"||aaa=="not bad"||aaa=="great!"||aaa=="great"){
            printf("normal");        fflush(stdout);
            return 0;
        }
    }
    return 0;
}
