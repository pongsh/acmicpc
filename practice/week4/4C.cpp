#include <iostream>
#include <set>
using namespace std;

int main() {
    int T;
    cin >> T;
    set<string> rums;
    for (int t = 0; t != T; ++t) {
        cout << "Case #" << t+1 << endl;
        
        int D;
        cin >> D;       
        cin.get();

        for (int d = 0; d != D; ++d) {
            string rum;
            getline(cin, rum);
            rums.insert(rum);
        }   
        
        int P;
        cin >> P;
        cin.get();
        
        for (int p = 0; p != P; ++p) {
            string rum;
            getline(cin, rum);
            if (rums.count(rum)) {
                cout << "Coming right up" << endl;
            }
            else {
                cout << "Special Delivery" << endl;
            }
        }       
        rums.clear();
    }
    return 0;
}