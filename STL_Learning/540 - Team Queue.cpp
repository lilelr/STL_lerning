//queue map 的使用
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
//using namespace std;
//#define LL long long
//
//const int maxt = 1000 + 10;
//
//int main() {
//  //  freopen("/Users/yuxiao/XcodeProject/STL_Learning/STL_Learning/in", "r",
//  //          stdin);
//  //  freopen("/Users/yuxiao/XcodeProject/STL_Learning/STL_Learning/out", "w",
//  //          stdout);
//
//  int t;
//  int caseN = 1;
//  while (scanf("%d", &t) == 1 && t) {
//    printf("Scenario #%d\n", caseN++);
//    map<int, int>
//        team;  // key 为队员号码，value
//               // 为队的编号，team记录所有队员编号和其队伍编号的对应关系
//    for (int i = 0; i < t; i++) {
//      int n, x;
//      scanf("%d", &n);
//      while (n--) {
//        //
//        scanf("%d", &x);
//        team[x] = i;
//      }
//    }
//    //模拟，qteam保留整个队列，里面元素为队的编号，非队员的编号；qll[]队列数组记录所有队伍，每个队伍queue记录队员编号
//    queue<int> qteam, qll[maxt];
//    for (;;) {
//      int y;
//      char cmd[10];
//      scanf("%s", cmd);
//      if (cmd[0] == 'S') {
//        break;
//      } else if (cmd[0] == 'D') {
//        int frontItem = qteam.front();  //取出排在前面的队伍编号
//        printf("%d\n", qll[frontItem].front());
//        qll[frontItem].pop();  //相对应的第一个队员出队
//        if (qll[frontItem].empty()) {
//          qteam.pop();
//        }
//      } else if (cmd[0] == 'E') {
//        scanf("%d", &y);
//        int tNumer = team[y];
//        if (qll[tNumer].empty()) {
//          qteam.push(tNumer);
//        }
//        qll[tNumer].push(y);
//      }
//    }
//    printf("\n");
//  }
//
//  return 0;
//}
