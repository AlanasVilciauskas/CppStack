#include <iostream>
#include <stack>

using namespace std;

int main(){

    ///2 uzd

    stack<char> z_atvirksciai;
    string zodis;

    cout << "iveskite zodi: ";
    getline(cin, zodis);

    for(char c : zodis){
        z_atvirksciai.push(c);
    }

    cout << "atvirksciai: ";
    while(!z_atvirksciai.empty()){
        cout << z_atvirksciai.top();
        z_atvirksciai.pop();
    }
    cout << endl;

    return 0;
}
