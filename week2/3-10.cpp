#include<iostream>
using namespace std;

int GCD(int a, int b){
    if(a < b){
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    while(b != 0){
        int Y = a%b;
        a=b;
        b=Y;
    }
    return a;
}

int LCM(int a, int b){
    int j;
    j = (a * b)/GCD(a,b);
    return j;
}


int main(){
    int a,b;
    cin >> a >> b;
    cout << "GCD:" << GCD(a,b) << endl;
    cout << "LCM:" << LCM(a,b) ;
}