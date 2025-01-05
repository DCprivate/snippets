#include <iostream>
#include <vector>
#include <string>
using namespace std;

void dfs(int left, int right, int n, string s, vector<string>& vec) {
    if (left == right && left + right == n * 2) {
        vec.push_back(s);
        //return;
    }
    //cout << s << endl;
    if (left < n) {
        //cout << "increasing left: " << s << endl;
        dfs(left + 1, right, n , s + "(", vec);
    }
    if (right < left) {
        //cout << "increasing right: " << s << endl;
        dfs(left, right + 1, n , s + ")", vec);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> balanced_parens;
    dfs(0, 0, n, "", balanced_parens);
    return balanced_parens;
}

int main() {
    vector<string> answer;
    int n = 3;
    answer = generateParenthesis(n);

    for(auto item : answer) {
        cout << item << endl;
    }

}

// fastest
/*
         void parenth(int n,int left,int right,vector<string>&ans,string &temp)
         {
               if(left+right == 2*n)
               {
                     ans.push_back(temp);
                     return;
               }

              // left parenth 

               if(left<n)
               {
                   temp.push_back('(');
                   parenth(n,left+1,right,ans,temp);
                   temp.pop_back();
               }

               //Right parenth
               if(right<left)
               {
                    temp.push_back(')');
                    parenth(n,left,right+1,ans,temp);
                   temp.pop_back();  
               }
         }
    vector<string> generateParenthesis(int n) {
        
             vector<string>ans;
             string temp;
             parenth(n,0,0,ans,temp);
             return ans;

    }
*/