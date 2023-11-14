#include<bits/stdc++.h>
using namespace std; 

int main() {
    string s;
    cin >> s;
    int price = 700;
    int counter = 0;

    for(int i = 0; i  < 3; i++) {
        if(s[i] == "⚪︎") {
            ++counter;
        }
    }
    cout << price + 100*counter << endl;
}