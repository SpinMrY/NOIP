#include <cstdio>
using namespace std;
int loop(int n){
    if(n==1){
        printf("2(0)");
        return 0;
    }
    if(n==2){
        printf("2");
        return 0;
    }
    if(n>2){
        int i=1,cishu=0;
        for(;;){
            i*=2;
            if(i>n){
                i=i*0.5;
                if(cishu==1)printf("2");
                else{
                    printf("2(");
                    loop(cishu);
                    printf(")");
                }
                if(n-i!=0){
                    printf("+");
                    loop(n-i);
                }
                return 0;
            }
            else cishu++;
        }
    }
}
int main(){
    int input;
    scanf("%d",&input);
    loop(input);
    return 0;
}