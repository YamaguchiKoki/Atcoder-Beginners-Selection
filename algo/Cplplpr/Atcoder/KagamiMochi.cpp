#include<bits/stdc++.h>
using namespace std;  

int main() {
    int N;
    cin >> N;
    int mochi [110] ;
    
    for (int i = 0; i < N; i++) cin >> mochi[i];

    int n [110] = {0};

    for (int i = 0; i < N; i++) {
        n[mochi[i]] ++;
    }

    int res = 0;

    for(int i = 1; i <= 100; i++) {
        if(n[i]) res++;
    }

    cout << res << endl;

    return 0;
}