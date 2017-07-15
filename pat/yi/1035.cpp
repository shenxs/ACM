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

int orignal[100]; //原始数列
int operate[100]; //进行排序的数列

int compare[100] = {0};
void copy(int n) {
  for (int i = 0; i < n; i++) {
    operate[i] = orignal[i];
  }
}

bool compareArry(int n) {
  for (int i = 0; i < n; i++) {
    if (operate[i] != compare[i])
      return false;
  }
  return true;
}
void displayArry(int a[], int n) {
  cout << a[0];
  for (int i = 1; i < n; i++) {
    cout << " " << a[i];
  }
  cout << endl;
}
int main() {

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> orignal[i];
  }
  copy(n);
  for (int i = 0; i < n; i++) {
    cin >> compare[i];
  }
  bool show = false;
  for (int i = 1; i < n; i++) {
    int temp = operate[i];
    int j = i - 1;
    for (; j >= 0 && operate[j] > temp; j--) {
      operate[j + 1] = operate[j];
    }
    operate[j + 1] = temp;
    if (show) {
      displayArry(operate, n);
      return 0;
    }
    if (compareArry(n)) {
      show = true;
      cout << "Insertion Sort" << endl;
    }
  }
  copy(n);
  cout << "Merge Sort" << endl;
  int k = 1;
  bool flag = true;
  while (flag) {
    flag = false;
    for (int i = 0; i < n; i++) {
      if (operate[i] != compare[i]) {
        flag = true;
        break;
      }
    }
    k = k * 2;
    for (int i = 0; i < n / k; i++) {
      sort(operate + i * k, operate + (i + 1) * k);
    }
    sort(operate + n / k * k, operate + n);
  }
  displayArry(operate, n);
  return 0;
}
