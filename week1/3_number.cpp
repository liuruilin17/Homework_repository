#include<iostream>
using namespace std;
int main()
{
    int number;
    int temp;
    int reverse = 0;
    cin >> number;
    int initialNumber = number;
    while(number != 0){
        temp = number % 10;
        reverse = reverse * 10 + temp;
        number /= 10;
    }
    if (reverse == initialNumber){
        cout << "是回文数";
    }
    else{
        cout << "不是回文数";
    }
   

}