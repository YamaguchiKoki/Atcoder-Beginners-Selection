// #include <bits/stdc++.h>
// using namespace std;

// int sumOfDigits(int n)
// {
//     int sum = 0;
//     while (n > 0)
//     {
//         sum += n % 10;
//         n /= 10;
//     }
//     return sum;
// }

// int main()
// {
//     int N, A, B;
//     int res = 0;
//     cin >> N >> A >> B;
//     // while (N > 0)
//     // {
//     //     int sum = sumOfDigits(N);
//     //     if (A <= sum && B >= sum)
//     //     {
//     //         res += sum;
//     //     }
//     //     N -= 1;
//     // }

//     for (int i = 0; i<=N; i++) {
//         int sum = sumOfDigits(i);
//         if (A <= sum && B >= sum)
//         {
//             res += sum;
//         }
//     }

//     cout << res << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

// 各桁の和を計算する関数
int findSumOfDigits(int n) {
  int sum = 0;
  while (n > 0) { // n が 0 になるまで
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int total = 0;
  for (int i = 1; i <= N; ++i) {
    int sum = findSumOfDigits(i); // i の各桁の和
    if (sum >= A && sum <= B) { //  i の各桁の和が A 以上 B 以下かどうか
      total += i;
    }
  }
  cout << total << endl;
}
