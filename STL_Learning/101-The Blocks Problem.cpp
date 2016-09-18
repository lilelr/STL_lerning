//// vector 中push_back 等成员函数会自动更新size()大小
// vector 数组 vector<int> piles[maxn];  可通过piles[position][height] == a
// 直接访问
// vector resize(newsize)
//// int pa, pb, ha, hb; C++自动初始化为0
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
// const int maxn = 30;
// int n;
// vector<int> piles[maxn];  // 每个pile[i]是一个vector
//
//// 找木块a所在的pile和height，以引用的形式返回调用者
// void find_block(int a, int &position, int &height) {
//  for (position = 0; position < n; position++) {
//    for (height = 0; height < piles[position].size(); height++) {
//      if (piles[position][height] == a) {
//        return;
//      }
//    }
//  }
//}
//
//// 把第p堆高度为h的木块上方的所有木块移回原位
// void clear_above(int p, int h) {
//  for (int i = h + 1; i < piles[p].size(); i++) {
//    int b = piles[p][i];
//    piles[b].push_back(b);  // 把木块b放回原位
//  }
//
//  piles[p].resize(h + 1);  // pile只应保留下标0~h的元素
//}
//
//// 把第p堆高度h及其上方的木块整体移动到p2堆的顶部
// void pile_onto(int p, int h, int p2) {
//  for (int i = h; i < piles[p].size(); i++) {
//    piles[p2].push_back(piles[p][i]);
//  }
//  piles[p].resize(h);
//}
//
// void print() {
//  for (int i = 0; i < n; i++) {
//    cout << i << ":";
//    for (int j = 0; j < piles[i].size(); j++) {
//      cout << " " << piles[i][j];
//    }
//    cout << endl;
//  }
//}
//
// int main() {
//  //  freopen("/Users/yuxiao/XcodeProject/STL_Learning/STL_Learning/in", "r",
//  //          stdin);
//  //  freopen("/Users/yuxiao/XcodeProject/STL_Learning/STL_Learning/out", "w",
//  //          stdout);
//  //
//  int a, b;
//  cin >> n;
//  string s1, s2;
//  for (int i = 0; i < n; i++) {
//    piles[i].push_back(i);
//  }
//
//  while (cin >> s1 >> a >> s2 >> b) {
//    int pa, pb, ha, hb;
//    pa = ha = hb = pb = 0;
//    find_block(a, pa, ha);
//    find_block(b, pb, hb);
//    if (pa == pb) {  // 非法指令
//      continue;
//    }
//    if (s2 == "onto") {
//      clear_above(pb, hb);
//    }
//    if (s1 == "move") {
//      clear_above(pa, ha);
//    }
//    pile_onto(pa, ha, pb);
//  }
//  print();
//
//  return 0;
//}
