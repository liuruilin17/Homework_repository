#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i != 0){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
}

int main(){
    int a;
    cin >> a;
    cout << boolalpha << isPrime(a);
}