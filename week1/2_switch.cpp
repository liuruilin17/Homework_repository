#include<iostream>
using namespace std;
int main(){
    int score;
    cin >> score;
    switch(score){
        case 10:
        case 9:
            cout << "经典";
            break;
        case 8:
        case 7:
            cout << "非常好";
            break;
        case 5:
        case 6:
            cout << "一般";
            break;
        default:
            cout << "烂片";
            break;

    }
}