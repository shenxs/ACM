#define mem(a,x) memset(a,x,sizeof(a))
#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<math.h>
#include<algorithm>
#include<sstream>
#include<stack>
#include<queue>
#include<iomanip>
#include<map>
#include<climits>
using namespace std;


class Solution {
public:
  string removeKdigits(string num, int k) {
    if(num.length()==k) return "0";
    stack<char> s;

    for(int i=0;i<num.length();i++){
      while(!s.empty()&& s.top()>num[i]&&k){
        s.pop(),k--;
      }
      s.push(num[i]);
    }
    while(k--){
      s.pop();
    }
    string ans="";

    while(!s.empty())
      ans = ans + s.top(),s.pop();
    while(ans.size()!=0 && ans[ans.size()-1]=='0')
      ans.pop_back();
    reverse(ans.begin(),ans.end());
    if(ans.length()==0) ans = "0";
    return ans;


  }
};

int main()
{
  Solution* s=new Solution();
  cout<<s->removeKdigits("1432219",2)<<endl;
  return 0;
}
