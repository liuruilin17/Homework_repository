#include<iostream>
using namespace std;

int getPower(int x, int y);
double getPower(double x, int y);

int main(){
    int a,m;
    double b;
    cin >> a >> b >> m;
    cout << getPower(a,m) << endl;
    cout << getPower(b,m);
}

int getPower(int x,int y){
    if (y==0){
        return 1;
    }
    if(y < 0){
        return 0;
    }
    return x * getPower(x,y-1);
}

double getPower(double x,int y){
    if (y==0){
        return 1;
    }
    if(y < 0){
        return 1.0/x * getPower(x,y+1);
    }
    return x * getPower(x,y-1);
}