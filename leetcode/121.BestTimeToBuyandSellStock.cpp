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
  int maxProfit(vector<int>& prices) {
    int minPrice=INT_MAX;

    int maxprofit=0;
    for(int i=0;i<prices.size();i++){
      if(prices[i]<minPrice){
        minPrice=prices[i];
      }else if(prices[i]-minPrice> maxprofit){
        maxprofit=prices[i]-minPrice;
      }
    }
    return maxprofit;
  }
};


int main()
{

  return 0;
}
