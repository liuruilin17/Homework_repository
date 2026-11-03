#include<iostream>
#include<string>
using namespace std;
int main(){
    string number;
    cin >> number;
    int times = (number.length() / 2);
    int length = number.length();
    int abc = 1;

    for (int i = 0; i < times; i++){
        if (number[i] == number[length - 1 - i]){
            continue;
        }
        else{
            abc = 0;
            break;
        }
    }
    if (abc == 1){
        cout << "是回文数";
    }
    else{
        cout << "不是回文数";
    }
}