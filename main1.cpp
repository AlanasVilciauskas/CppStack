#include <iostream>
#include <stack>

using namespace std;

int main() {
    ///1 uzd
    stack<int> dvejetainis;
    int sk;

    cout << "iveskite skaiciu: ";
    cin >> sk;

    while(sk != 0){
        dvejetainis.push(sk % 2);
        sk /= 2;
    }
    cout << "dvejetainis skaicius yra: ";
    while(!dvejetainis.empty()){
        cout << dvejetainis.top();
        dvejetainis.pop();
    }
    cout << endl;


    
    return 0;
}