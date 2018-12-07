#include<iostream>
using namespace std;

class Solution {
public:
  int hammingDistance(int x, int y) {
    int count=0;
    while(x^y){
      count+= (x&1)^(y&1);
      x=x>>1;
      y=y>>1;
    }
    return count;
  }
};

int main(){
  Solution s;
  cout<<(3+5&1)<<endl;

}
