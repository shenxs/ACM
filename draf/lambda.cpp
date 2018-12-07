#include<iostream>
#include<functional>

using namespace std;

int main(){
  auto basicLambda=[]{cout<<"hello"<<endl;};
  basicLambda();
}
