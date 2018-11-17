#include <algorithm>
#include <iostream>
#include <list>
#include <string>
using namespace std;


class Student{
public:
  int score;
};


class MyList{
private:
  list<int> los;

public:
  MyList(){}
  void sort(){

  }
  void add(int s){
    los.push_back(s);
  }

  Student* findbyScore(int score) const {
    list<Student>::iterator it=NULL;
    for( it=los.begin();it!=los.end();it++){

    }
    return NULL;
  }
};

int main(){

  string a;
}
