#include<iostream>
using namespace std;

void count(int a, int b){
    int c = a * b;
    cout << a << " * " << b << " = " << c << " ";
}

int main()
{
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= i ; j++){
            count(i,j);
        }
        cout << " " << endl;
    }
}