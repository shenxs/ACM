#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
  vector<int> countBits(int num) {
    //todo 可以用动态规划更好实现
    vector<int> re;
    for(int i=0;i<=num;i++){
      int temp=i;
      int count=0;
      while(temp^0){
        count+=temp&1;
        temp>>=1;
      }
      re.push_back(count);
    }

    return re;

  }
};

int main(){
  Solution s;
  vector<int> r=s.countBits(5);
  for(auto i : r){
    cout<<i<<endl;
  }

}
