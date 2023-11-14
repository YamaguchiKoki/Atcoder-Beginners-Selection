#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string s;
    cin >> N >> s;
    bool yes = false;

    for(int i = 0; i < N-1; i++) {
        if(s[i] == 'a' and s[i+1] == 'b') yes = true;
        if(s[i] == 'b' and s[i+1] == 'a') yes = true;
    }

    cout << (yes ? "yes" : "No") << endl;
}