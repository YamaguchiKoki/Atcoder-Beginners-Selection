#include<bits/stdc++.h>
using namespace std;

int main() {
    int r,g,b;
    cin >> r >> g >> b;
    int res = r*100 + g*10 + b;
    cout << ((res%4 == 0) ? "Yes" : "No" )<< endl;
}
