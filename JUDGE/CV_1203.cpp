/*
作者:SpinMrY
题目:p1203 判断浮点数是否相等
*/

/*
//如何写一份可以提交的代码？以P1000 A+B为例
#include <iostream>
using namespace std;
int main()
{
    int a, b; //定义两个变量名
    cin >> a >> b; //从标准输入流中输入两个整数
    cout << a + b << endl; //输出到标准输出流中

}
// 完成程序以后，点击下方的提交，即可看到测试结果
*/
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    float a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}
