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

struct node {
  int address;
  int data;
  int next;
};

int main() {
  int firstAddress;
  int N, K; //总共N个node,反转K
  cin >> firstAddress >> N >> K;
  vector<node> MassList;
  map<int, node> record;
  vector<node> Order;
  for (int i = 0; i < N; i++) {
    node temp;
    cin >> temp.address >> temp.data >> temp.next;
    record[temp.address] = temp;
  }
  while (firstAddress != -1) {
    Order.push_back(record[firstAddress]);
    firstAddress = record[firstAddress].next;
  }
  int sum = Order.size();
  for (int j = 0; j < sum - sum % K; j += K) {
    for (int i = j; i < j + K / 2; i++) {
      int target=j+K-i%K-1;
      int temp=Order[i].data;
      Order[i].data=Order[target].data;
      Order[target].data=temp;

      temp=Order[i].address;
      Order[i].address=Order[target].address;
      Order[target].address=temp;
    }
  }
  for (unsigned int i = 0; i < Order.size(); i++) {
    cout << setw(5) << setfill('0') << Order[i].address << " " << Order[i].data
         << " ";
    if (i != Order.size() - 1)
      cout << setw(5) << setfill('0') << Order[i + 1].address << endl;
    else {
      cout << Order[i].next << endl;
    }
  }
  return 0;
}
