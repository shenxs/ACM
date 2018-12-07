#include<iostream>
#include<vector>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;

void displayVector(const vector<int> &a);
void foo(vector<int> &a);
int parent(int i);
int left(int i);
int right(int i);

int main(){

  vector<int> array;
  srand(time(NULL));

  for(int i=0;i<10000;i++){
    array.push_back(rand()%100000+1);
  }
  foo(array);

}

vector<int> heapSort(vector<int> a){
  // void myquick(int start,int end){
  //   std::cout<<"Hell0o"<<std::endl;
  // }
  // myquick(1,2);
}

void displayVector(const vector<int> &a){
  for(auto i:a){
    cout<<i<<" ";
  }
  cout<<endl;
}

int parent(int i){
  return i/2;
}
int left(int i){
  return 2*i;
}
int right(int i){
  return 2*i+1;
}

