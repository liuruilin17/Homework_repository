#include<iostream>
using namespace std;
int main()
{
    int score;
    cin >> score;
    if (score == 9 || score == 10){
        cout << "你认为电影经典";
    }
    else if (score == 7 || score == 8){
        cout << "你认为电影非常好";
    }
    else if (score == 5 || score == 6){
        cout << "你认为电影一般";
    }
    else if (score < 5){
        cout << "烂片";
    }

}