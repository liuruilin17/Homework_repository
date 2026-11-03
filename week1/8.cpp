#include<iostream>
using namespace std;

int eat(int end){
    return (end + 1) * 2;
}

int main(){
    int ohno = 1;
    for(int i=1; i < 10; i++){
        ohno = eat(ohno);
    }
    cout << ohno;
} 
