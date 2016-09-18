//// priority_queue<LL, vector<LL>, greater<LL> > pq;
// set.count(item)=0,1 是否存在于set中
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
//#include <vector>
// using namespace std;
//#define LL long long
//
// int factors[3] = {2, 3, 5};
// int main() {
//  //  freopen("/Users/yuxiao/XcodeProject/STL_Learning/STL_Learning/in", "r",
//  //          stdin);
//  //  freopen("/Users/yuxiao/XcodeProject/STL_Learning/STL_Learning/out", "w",
//  //          stdout);
//
//  priority_queue<LL, vector<LL>, greater<LL> > pq;
//  set<LL> s;
//  pq.push(1);
//  s.insert(1);
//  for (int i = 1;; i++) {
//    LL x = pq.top();
//    pq.pop();
//    if (i == 1500) {
//      cout << "The 1500'th ugly number is " << x << ".\n";
//      break;
//    }
//    for (int j = 0; j < 3; j++) {
//      LL x2 = x * factors[j];
//      if (!s.count(x2)) { // 是否存在于set中
//        s.insert(x2);
//        pq.push(x2);
//      }
//    }
//  }
//  return 0;
//}
