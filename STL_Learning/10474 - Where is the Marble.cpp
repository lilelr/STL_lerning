//// sort,lower_bound
//#include <algorithm>
//#include <cmath>
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <iostream>
//#include <map>
//#include <queue>
//#include <set>
//#include <string>
//using namespace std;
//#define LL long long
//
//int n;
//int q;
//int x;
//int marbles[10007];
//int caseN = 1;
//int main() {
//  //  freopen("", "r", stdin);
//  //  freopen("", "w", stdout);
//
//  while (scanf("%d%d", &n, &q) && !(n == 0 && q == 0)) {
//    for (int i = 0; i < n; i++) {
//      cin >> marbles[i];
//    }
//
//    sort(marbles, marbles + n);
//    cout << "CASE# " << caseN++ << ":" << endl;
//
//    while (q--) {
//      cin >> x;
//      long ans = lower_bound(marbles, marbles + n, x) -
//                 marbles;  // 找不到则返回第一个比x大的元素的下标
//
//      //      cout << "ans: " << ans << endl;
//      if (marbles[ans] == x) {
//        cout << x << " found at " << ans + 1 << endl;
//      } else {
//        cout << x << " not found" << endl;
//      }
//    }
//  }
//  return 0;
//}
