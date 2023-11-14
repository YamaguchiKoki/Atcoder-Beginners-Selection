#include<bits/stdc++.h>
using namespace std;  

int main() {
    int N ;
    int A[210];
    for(int i = 0; i < N; i++) cin >> A[i];

    int counter = 0;

    while(true) {
        bool exist_odd = false;

        for(int i = 0; i < N; i++) {
            if(A[i] % 2 == 1) {
                exist_odd = true;
            }
        }
        if(exist_odd) break;

        for(int j = 0; j < N; j++) {
            A[j] /= 2;
        }
        counter++;
    }

    cout << counter << endl;

}
