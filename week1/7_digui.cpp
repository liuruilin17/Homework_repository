#include<iostream>
using namespace std;

void pairs(int a, int b, int month)
{
    if (month > 20)
        return;

    int c = a + b;

    cout << "第" << month << "个月：" << c * 2 << "只" << endl;

    pairs(b,c,month + 1);
}

  
int main(){
    cout << "第" << "1" << "个月：" << "2" << "只" << endl;
    cout << "第" << "2" << "个月：" << "2" << "只" << endl;
    pairs(1,1,3);
}