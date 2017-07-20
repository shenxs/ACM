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

vector<int> tree;
vector<int> nodes;
int N;

void buildTree(int root) {
  static int index = 1;
  if (root > N)
    return;
  buildTree(root * 2);
  tree[root] = nodes[index++];
  buildTree(root * 2 + 1);
}
int main() {
  cin >> N;
  nodes.resize(N + 1);
  tree.resize(N + 1);
  for (int i = 1; i <= N; ++i) {
    cin >> nodes[i];
  }
  sort(nodes.begin(), nodes.end());
  buildTree(1);
  cout << tree[1];
  for (int i = 2; i <= N; ++i) {
    cout << " " << tree[i];
  }
  cout << endl;
  return 0;
}
