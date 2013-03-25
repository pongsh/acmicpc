#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int n = 0; n != N; ++n) {
        int A, B, C;
        cin >> A >> B >> C;
        
        int maxProduction = 0;
        vector<queue<int> > factories(B, queue<int>());
        
        for (int b = 0; b != B; ++b) {
            for (int c = 0; c != C; ++c) {
                int temp;
                cin >> temp;
                factories[b].push(temp);
            }
        }

        for (int a = 0; a < A; ++a) {
            int maxValue = -1001;
            int index = 0;
            for (int b = 0; b != factories.size(); ++b) {
                if (!factories[b].empty()) {
                    if (factories[b].front() > maxValue) { 
                        maxValue = factories[b].front();
                        index = b;         
                    }
                }
            }       
            maxProduction += maxValue;
            factories[index].pop();
        }
        cout << maxProduction << endl;
    }
    return 0;
}
