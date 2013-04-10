#include <iostream>
#include <map>
using namespace std;

int main() {
    int T;
    cin >> T;
    map<string, int> a;
    for (int t = 0; t != T; ++t) {
        cout << "Case #" << t+1 << endl;
        int R;
        cin >> R;
        for (int r = 0; r != R; ++r) {
            string key;
            cin >> key;
            int value;
            cin >> value;
            a[key] = value;
        }
        int N;
        cin >> N;
        for (int n = 0; n != N; ++n) {
            int C;
            cin >> C;
            int result = 0;
            for (int c = 0; c != C; ++c) {
                string key;
                cin >> key;
                result += a[key];
                
            }
            cout << "Cart " << n+1 << ": " << result << endl;
        }       
        a.clear();
    }
    return 0;
}