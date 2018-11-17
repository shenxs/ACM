#include<iostream>
#include<vector>
using namespace std;
int n,m,p;
string s;
bool sortFunc(const string a,const string b) {
    return a.length()<=b.length();
}
int main() {
    while(cin>>n) {
        if(n==0) break;
        vector<string> tmp,vec;
        for(int i=0;i<n;++i) {
            cin>>s;
            vec.push_back(s);
        }
        // for(int i=1;i<vec.size();i+=2){
            // string ss=vec[i];
            // vec.erase(vec.begin()+i-p);
            // res.push_back(ss);
            // p++;
        // }
        for(int i=0;i<vec.size();i+=2){
           tmp.push_back(vec[i]);
        }
        int t = vec.size() & 1 ? vec.size()-2:vec.size()-1;
        for(int i=t;i>=0;i-=2){
            tmp.push_back(vec[i]);
        }
        // for(vector<string>::iterator it=res.end();it!=res.begin();it--){
            // vec.push_back(*it);
        // }
        cout<<"SET "<<++m<<endl;
        for(vector<string>::iterator it=tmp.begin();it!=tmp.end();it++){
            cout<<*it<<endl;
        }


    }
}
