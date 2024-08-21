#include <iostream>
#include <vector>
#include <string>
using namespace std;

void dfs(int left, int right, int n, string s, vector<string>& vec) {
    if (left == right) {
        vec.push_back(s);
        //return;
    }
    cout << s << endl;
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