#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){

    ///3 uzd

    bool isPalindrome = true;

    stack<char> z_atvirksciai;
    queue<char> z_priekis;

    string zodis;

    cout << "iveskite zodi: ";
    getline(cin, zodis);

    for(char c: zodis){
        if(c == ' ' || c == '.' || c == ',' || c == '!' || c == '?'){
            continue;
        }

        char clean_c = tolower(c);

        z_atvirksciai.push(clean_c);
        z_priekis.push(clean_c);
    }

    while(!z_atvirksciai.empty() && !z_priekis.empty()){
        if(z_atvirksciai.top() != z_priekis.front()){
            isPalindrome = false;
            break;
        }
        z_atvirksciai.pop();
        z_priekis.pop();
    }
        
    if(isPalindrome){
        cout << "zodis yra palindromas" << endl;
    } else {
        cout << "zodis nera palindromas" << endl;
    }

    return 0;
}