#include<bits/stdc++.h>
using namespace std;  

int main() {
    int N;
    cin >> N;
    int mochi [110] ;
    for(int i = 0; i < N; i++) cin >> mochi[i];
    set <int> s ;
    for(int i = 0; i < N; i++) {
        s.insert(mochi[i]);
    }
    cout << s.size() << endl;
    return 0;
}