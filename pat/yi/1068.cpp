#include <algorithm>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <math.h>
#include <queue>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
int M, N, TOL;
int cnt; //差异够大的点的个数
int matrix[1000][1000] = {{0}};
bool tag[1000][1000] = {{true}};
int x, y, color;

int dx[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dy[] = {-1, -1, -1, 0, 1, 1, 1, 0};

//是不是一个好点
bool goodpoint(int x, int y, int t) {
  for (int i = 0; i < 8; i++) {
    int tx = x + dx[i]; // w
    int ty = y + dy[i];
    if (tx >= 0 && tx <= M - 1 && ty >= 0 && ty <= N - 1) {
      if (abs(matrix[x][y] - matrix[x + dx[i]][y + dy[i]]) <= abs(t))
        return false;
    }
  }
  return true;
}
int main() {
  cin >> M >> N >> TOL;
  cnt = 0;
  map<int, int> count;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> matrix[j][i];
      count[matrix[j][i]]++;
    }
  }
  for (int i = 0; i <= N - 1; i++) {
    for (int j = 0; j <= M - 1; j++) {
      if (count[matrix[j][i]] == 1) {
        if (goodpoint(j, i, TOL)) {
          x = j, y = i, cnt++;
          color = matrix[x][y];
        }
      }
    }
  }
  if (cnt == 0) {
    cout << "Not Exist" << endl;
  } else if (cnt == 1) {
    cout << "(" << x + 1 << ", " << y + 1 << "): " << color << endl;
  } else if (cnt > 1) {
    cout << "Not Unique" << endl;
  }
  return 0;
}
