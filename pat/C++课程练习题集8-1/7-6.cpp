#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n,m;
string s;
bool sortFunc(string a,string b){
   return a+b>b+a;
}
int main(){
    while(cin>>n) {

        vector<string> vec;
        while(n--) {
            cin>>s;
            vec.push_back(s);
        }
        sort(vec.begin(),vec.end(),sortFunc);
        for(int i=0;i<vec.size();++i)
            cout<<vec[i];
        cout<<endl;
    }
}
