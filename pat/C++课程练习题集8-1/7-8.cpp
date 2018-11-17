#include<iostream>
#include<vector>
using namespace std;
int n,m,flag=0;
char ch;
vector<vector<char>> board;

bool recursive(const string& s,int i,int j,int index) {
    if(index==s.size()) return true;
    if(i>n-1||j>m-1||i<0||j<0) return false;
    if(board[i][j]!=s[index]) return false;
    board[i][j]='*';
    bool res=recursive(s,i+1,j,index+1)||
             recursive(s,i-1,j,index+1)||
             recursive(s,i,j+1,index+1)||
             recursive(s,i,j-1,index+1);
    board[i][j]=s[index];
    return res;
}
bool wordSearch(string s){
    for(int i=0;i<board.size();++i)
        for(int j=0;j<board[0].size();++j)
            if(recursive(s,i,j,0)) return true;
    return false;
}
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); ++i)
        {
            for(int j = 0; j < board[0].size(); ++j)
            {
                if(adjacentSearch(board, word, i, j, 0))
                    return true;
            }
        }
        return false;

    }
protected:
    bool adjacentSearch(vector<vector<char>>& board, const string& word, int i, int j, int index)
    {
        if(index == word.size()) return true; // end condition
        if(i < 0 || j < 0 || i > board.size()-1 || j > board[0].size()-1) return false; // boundary of matrix
        if(board[i][j] != word[index]) return false; // do not match
        // match!
        board[i][j] = '*'; // change the content, to avoid duplicated search
        bool furtherSearch =  adjacentSearch(board, word, i+1, j, index+1) || // up
                              adjacentSearch(board, word, i-1, j, index+1) || // down
                              adjacentSearch(board, word, i, j-1, index+1) || // left
                              adjacentSearch(board, word, i, j+1, index+1);   // right

        board[i][j] = word[index]; // modify it back!
        return furtherSearch;
    }
};
int main() {
    
    int n,m;
    cin>>n>>m;
    board.resize(n);
    for(int i=0;i<n;++i){
        board[i].resize(m);
        for(int j=0;j<m;++j)
            cin>>board[i][j];
    }
    string s;
    cin>>s;
    if(s.length()>m*n){
        cout<<"Not exist";
        return 0;
    }
    Solution a;
    cout<< (a.exist(board,s)?"Exist":"Not exist");
    // cout<<"Not exist";
}
