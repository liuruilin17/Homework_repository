#include<iostream>
using namespace std;

int main()
{
    double profit;
    double bonus;
    cin >> profit;
    if (profit <= 100000){
        bonus = profit * 0.1;
        cout << bonus;
    }
    else if(profit > 100000 && profit < 200000){
        bonus = (100000 * 0.1) + ((profit - 100000) * 0.075);
        cout << bonus;
    }
    else if (profit >= 200000 && profit< 400000){
        bonus = (100000 * 0.1) + (100000 * 0.075) + ((profit - 200000) * 0.05);
        cout << bonus;
    }
    else if (profit >= 400000 && profit< 600000){
        bonus = (100000 * 0.1) + (100000 * 0.075) + (200000 * 0.05) + ((profit-400000) * 0.03);
        cout << bonus;
    }
    else if (profit >= 600000 && profit< 1000000){
        bonus = ((profit - 600000)* 0.015) + (100000 * 0.1) + (100000 * 0.075) + (200000 * 0.05) + (200000 * 0.03);
        cout << bonus;
    }
    else{
        bonus = ((profit -1000000)*0.01)+((400000)* 0.015) + (100000 * 0.1) + (100000 * 0.075) + (200000 * 0.05) + (200000 * 0.03);
        cout << bonus;
    }

}