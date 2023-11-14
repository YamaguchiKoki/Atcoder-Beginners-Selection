#include<bits/stdc++.h>
using namespace std;

int main () {
  vector<int> v = {3, 8, 6, 1, 2, 7, 5, 4};  //この配列の初期化記法を使うときは、clangコマンドの最後に「-std=c++11」つける　他のやり方調べる
  
  //配列の並び替え（昇順）
  sort(v.begin(), v.end());
 
  //配列の出力
  for (int i = 0; i < v.size(); i++){
    if (i > 0) {
      cout << " ";
    }
    cout << v[i];  // => 1 2 3 4 5 6 7 8
  }
  
  return 0;
}