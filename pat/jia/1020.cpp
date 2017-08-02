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
vector<int> post, in, pr(100000, -1);

void pre(int root, int start, int end, int index) {
  if (start > end)
    return;
  int i = start;
  while (i < end && in[i] != post[root])
    i++;
  pr[index] = post[root];
  pre(root - 1 - end + i, start, i - 1, index * 2 + 1);
  pre(root - 1, i + 1, end, index * 2 + 2);
}

int main() {
  int n;
  cin >> n;
  post.resize(n);
  in.resize(n);
  for (int i = 0; i < n; ++i) {
    cin >> post[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> in[i];
  }
  pre(n - 1, 0, n - 1, 0);

  int cnt = 0;
  for(unsigned int i = 0; i < pr.size(); i++) {
    if(pr[i] != -1 && cnt != n - 1) {
      cout<<pr[i]<<" ";
      cnt++;
    } else if(pr[i] != -1){
      cout<<pr[i];
      break;
    }
  }

  return 0;
}
