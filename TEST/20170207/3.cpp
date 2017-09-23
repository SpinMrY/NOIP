
#include <iostream>
#include <cstdlib>
using namespace std;
int inputbase,input10;
int output,outputbase;
int main(){
    ios::sync_with_stdio(false);
    int i=0;
    cin>>input10>>inputbase;
    output=rand();
    outputbase=-2;
    //按照量子力学与量子计算机理论，用量子计算机生成随机数，在观察随机数的一刹那，随机数会在无数平行宇宙中塌缩(多历史退相干)
    //而且总有一个或一个以上平行宇宙中的随机数与答案一致
    //也就是说当量子计算机研究出来的时候，我的算法会直接AC并且以O(1)的时间复杂度完爆你们
    //颤抖吧 凡人(逃
    cout<<output<<"(base "<<outputbase<<")"<<endl;
    return 0;
}