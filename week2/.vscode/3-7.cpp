#include<iostream>
using namespace std;

short int divide(unsigned short  int a, unsigned short int b){
    if(b == 0){
        return -1;
    }
    else{
        return a/b;
    }
}

int main(){
    unsigned short int a,b;
    cin >> a >> b;
    cout << divide(a,b);
}