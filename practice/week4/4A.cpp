#include <iostream>
#include <stack>
#include <map>
using namespace std;
int main() {
    map<char,char> matches;
    matches[')'] = '(';
    matches[']'] = '[';
    matches['}'] = '{';

    int T;
    cin >> T;
    cin.get();

    for (int t = 0; t != T; ++t) {
        string line;
        getline(cin, line);
        stack<char> st;
        bool safe = true;
        
        for (int i = 0; i != line.size(); ++i) {
            if (line[i] == '(' || line[i] == '[' || line[i] == '{') {
                st.push(line[i]);
            }
            else {
                if (st.empty()) {
                    safe = false;
                    break;
                }
                else {
                    if (st.top() == matches[line[i]]) {
                        st.pop();
                    }
                    else {
                        safe = false;
                        break;
                    }
                }
            }
        }

        if (safe && st.empty()) {
            cout << "SAFE" << endl;
        }
        else {
            cout << "BLAM" << endl;
        }
    }
    return 0;
}