#include<bits/stdc++.h>
using namespace std; 

int main() {
    int N;
    cin >> N;
    string s;
    for(int i = 0; i < N; i++) {
        string c;
        cin >> c;
        s += c;
    }

    string dict[2] = {"ab", "ba"};
    bool can = false;

    for(int i = 0; i < 2; i++) {
       if(s.find(dict[i]) != string::npos) {
        can = true;
       }
    }

    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
}