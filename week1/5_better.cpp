#include<iostream>
using namespace std;
int main(){
    int a;
    int n;
    int sum = 0;
    int temp = 0;
    cin >> a;
    cin >> n;
    for(int i = 1; i<=n; i++){
        temp = temp * 10 + a;
        sum += temp;
        cout << temp << endl;
    }
    cout << sum << endl;
}