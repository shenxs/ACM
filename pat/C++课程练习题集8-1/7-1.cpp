#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <regex>

using namespace std;

int main(){
  vector<string> lines;
  string line;
  while(std::getline(std::cin,line)&&line!="end"){
    lines.push_back(line);
  }
  string org,target;
  cin>>org>>target;
  for(auto i: lines){
    cout<<std::regex_replace(i,std::regex(org),target)<<endl;
  }
}
