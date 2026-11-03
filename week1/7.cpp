#include<iostream>
using namespace std;

int main(){
    int a=1;
    int b=1;
    int c;
    int month=2;
    cout << "第1个月：" << a * 2 << "只" << endl;
    cout << "第2个月：" << a * 2 << "只" << endl;
    for(int i=3;i<=20;i++){
        c = a + b;
        a = b;
        b = c;
        month = month + 1;
        cout << "第" << month << "个月：" << c * 2 << "只 " << endl;
    }
}