#include<iostream>
using namespace std;

class Solution {
public:
  int hammingDistance(int x, int y) {
    int count=0;
    for(int i=31;i>0;i--){
      if((x&1)^(y&1)){
        count++;
      }
      x=x>>1;
      y=y>>1;
    }
    return count;
  }
};

int main(){
  Solution s;
  cout<<s.hammingDistance(1,4)<<endl;

}
