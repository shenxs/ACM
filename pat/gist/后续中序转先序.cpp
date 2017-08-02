#include <iostream>
#include <cstdio>
using namespace std;

int post[] = {3, 4, 2, 6, 5, 1};
int in[] = {3, 2, 4, 1, 6, 5};

void pre( int start, int end) {
  if (start > end)
    return;
  int i = start;
  while (i < end && in[i] != post[end])
    i++;
  printf("%d", post[end]);
  pre( start, i - 1);
  pre( i + 1, end);
}

int main() {
  pre(0, 5);
  return 0;
}
