#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<pair<int, int> > reconstructQueue(vector<pair<int, int> >& people) {
    vector<pair<int,int> > v=people;
    vector<bool> flags;flags.resize(people.size(), false);

  }
};

int main(){
  vector<pair<int,int> > people;
  people.push_back(make_pair<int,int>(7,0));
  people.push_back(make_pair<int,int>(4,4));
  people.push_back(make_pair<int,int>(7,1));
  people.push_back(make_pair<int,int>(5,0));
  people.push_back(make_pair<int,int>(6,1));
  people.push_back(make_pair<int,int>(5,2));

  Solution s;
  vector<pair<int,int> > result=s.reconstructQueue(people);
  for(auto i: result){
    cout<<i.first<<" "<<i.second<<endl;
  }


}
