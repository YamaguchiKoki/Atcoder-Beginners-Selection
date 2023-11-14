#include<bits/stdc++.h>
using namespace std; 

int main() {
    int N, X;
    cin >> N >> X;

    int S [10];
    for(int i = 0; i < N; i++) cin >> S[i];

    int res = 0;

    for(int j = 0; j < N; j++) {
        if(S[j] <= X) res += S[j];
    }

    cout << res << endl;
}