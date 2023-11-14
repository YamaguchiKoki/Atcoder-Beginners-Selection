#include<bits/stdc++.h>
using namespace std;

int main() {
    int B;
    cin >> B;
    int ans = -1;
   
    for(int i = 1; i <= pow(10, 9); i++) {
        if(pow(i, i) == B) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}