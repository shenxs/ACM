#include <iostream>
#include <list>
#include <vector>
#include <set>
#include <numeric>
#include <map>
#include <deque>
using namespace std;

class speaker
{
public:
  string name;
  int  m_score[3];
};

int Speaker(map<int, speaker> &speakers, vector<int> &v)
{
  string str = "abcdefghijklnmopqrstuvwxyz";
  random_shuffle(str.begin(),str.end());
  for (int i = 0; i < 24; i++)
  {
    speaker tmp;
    tmp.name = tmp.name+str[i];
    speakers.insert(pair<int, speaker>(100 + i, tmp));
  }
  for (int i = 0; i < 24; i++)
  {
    v.push_back(100+i);
  }

  return 0;
}

int cq(vector<int> &v)
{
  random_shuffle(v.begin(),v.end());
  return 0;
}

int compete(int index, vector<int> &v1, map<int, speaker> &speakers, vector<int> &v2)
{
  multimap<int, int, greater<int>> multsocre;

  int teamnum = 0;

  for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
  {
    teamnum++;
    deque<int> d;
    for (int j = 0; j < 10; j++)
    {
      int score = 50 + rand() % 50;
      d.push_back(score);
    }
    sort(d.begin(),d.end());
    d.pop_back();
    d.pop_front();
    int ssum = accumulate(d.begin(),d.end(),0);
    int savg = ssum / d.size();
    speakers[*it].m_score[index] = savg;
    multsocre.insert(pair<int, int>(savg, *it));
  }

  //处理分组
  if (teamnum % 6 == 0)
  {
    cout << "小组比赛成绩" << endl;
    for (multimap<int, int, greater<int>>::iterator it1=multsocre.begin();it1!= multsocre.end();it1++)
    {
      cout << it1->second << "\t" << speakers[it1->second].name << "\t" << it1->first << endl;
    }
    while (multsocre.size() > 3)
    {
      multimap<int, int, greater<int>>::iterator it1 = multsocre.begin();
      v2.push_back(it1->second);
      multsocre.erase(it1);
    }
    multsocre.clear();
  }
  return 0;
}


int main()
{
  map<int, speaker> speakers;
  vector<int> v1;
  vector<int> v2;
  vector<int> v3;
  vector<int> v4;
  Speaker(speakers,v1);
  cq(v1);
  compete(0,v1,speakers,v2);
  cq(v2);
  compete(0, v2, speakers, v3);
  cq(v3);
  compete(0, v3, speakers, v4);
  return 0;
}
