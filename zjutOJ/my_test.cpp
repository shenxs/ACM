#include<iostream>

using namespace std;

void apply(int target[],int rule[]){
  target[0] =1;
}


int main(int argc, char *argv[])
{
  int test[10];
  apply(test,test);
  cout<<test[0];

  return 0;
}
