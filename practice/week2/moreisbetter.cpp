#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define START first
#define END second

bool mySort(pair<int, int> i, pair<int, int> j) {
    return i.second < j.second;
}
 
int main() {
    int T;
    cin >> T;

    for (int t = 0; t != T; ++t) {
        int N;
        cin >> N;
        
        vector<pair<int, int> > times(N);

        for (int n = 0; n != N; ++n) {
            cin >> times[n].START >> times[n].END;    
        }
        sort(times.begin(), times.end(), mySort);

        int maxNum = 1;

        for (int n = 0; n != N-1; ++n) {
            int curNum = 1, curComp = n, nextComp = n+1;

            // while not every element is checked
            while (nextComp != N) {
                // check that the start time of the next competition is less than or equal to the end time of the current competition
                if (times[curComp].END <= times[nextComp].START) {
                    curNum++;
                    curComp = nextComp;
                }
                // move on to the next event
                nextComp++;
            }
            maxNum = max(maxNum, curNum);
        }
        cout << maxNum << endl;
    }
    return 0;
}
