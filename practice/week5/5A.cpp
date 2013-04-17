#include <iostream>
using namespace std;
int main() {
    int num, T;
    cin >> T;

    for (int t = 0; t != T; ++t) {
        int V;
        cin >> V;

        for (int i = 0; i != V; ++i) {            
            cout << i+1 << ": ";
            
            for (int j = 0; j != V; ++j) {
                cin >> num;
                if (num) {
                   cout << j+1 << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}