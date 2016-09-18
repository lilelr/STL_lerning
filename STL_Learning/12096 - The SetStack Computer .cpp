// stack ,set_intersection, set_union 的使用
//#include <algorithm>
//#include <cmath>
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <iostream>
//#include <map>
//#include <queue>
//#include <set>
//#include <stack>
//#include <string>
//#include <vector>
// using namespace std;
//#define LL long long
//
//#define ALL(x) x.begin(), x.end()
//#define INS(x) inserter(x, x.begin())
//
// typedef set<int> Set;
// map<Set, int> IDCache;  // 把集合映射成ID
// vector<Set> Setcache;   // 根据ID 取集合
//
////每一个集合都可用一个ID表示
// int ID(Set x) {
//  if (IDCache.count(x)) {
//    return IDCache[x];
//  } else {
//    Setcache.push_back(x);
//    IDCache[x] = Setcache.size() - 1;
//    return IDCache[x];
//  }
//}
//
// int main() {
//  //  freopen("/Users/yuxiao/XcodeProject/STL_Learning/STL_Learning/in", "r",
//  //          stdin);
//  //  freopen("/Users/yuxiao/XcodeProject/STL_Learning/STL_Learning/out", "w",
//  //          stdout);
//
//  int T, t;
//  cin >> T;
//  t = 1;
//  while (T--) {
//    stack<int> s;
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//      string op;
//      cin >> op;
//      if (op[0] == 'P') {
//        s.push(ID(Set()));
//      } else if (op[0] == 'D') {
//        s.push(s.top());
//      } else {
//        Set top1 = Setcache[s.top()];
//        s.pop();
//        Set top2 = Setcache[s.top()];
//        s.pop();
//        Set x;
//        if (op[0] == 'U') {
//          set_union(ALL(top1), ALL(top2), INS(x));  // Set 类型为set<int>
//                                                    //
//                                                    ，即把top1包含所有数字和top2包含的所有数字的并集存入新的
//                                                    // Set x中
//        }
//        if (op[0] == 'I') {
//          set_intersection(ALL(top1), ALL(top2), INS(x));
//        }
//        if (op[0] == 'A') {
//          x = top2;
//          x.insert(ID(top1));
//        }
//        s.push(ID(x));
//      }
//      cout << Setcache[s.top()].size() << endl;
//    }
//    cout << "***" << endl;
//  }
//  return 0;
//}
