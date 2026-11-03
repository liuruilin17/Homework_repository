#include<iostream>
using namespace std;

int lifang(int n){
    int sum = 0;
    sum = n * n * n;
    return sum;
}

int main(){
    int n;
    int temp;
    int sum = 0;
    cin >> n;
    int initialN = n;
    while(n != 0){
        temp = n % 10;
        sum += lifang(temp);
        n /= 10;
    }
    if (sum == initialN){
        cout << "是水仙花数";
    }
    else{
        cout << "不是水仙花数";
    }

    
    int scan = 100;
    while(scan <= 999){
        int a = scan / 100;
        int b = (scan / 10) % 10;
        int c = scan % 10;
        if (scan == lifang(a) + lifang(b) + lifang(c)){
            cout << scan << " ";
        }
        scan++;
    }

}