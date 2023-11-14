#include<bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    char head = S[0];
    char foot = S[S.size() -1];

    string size = to_string(S.size() - 2);
    string a = head + size + foot;

    cout << a << endl;
}