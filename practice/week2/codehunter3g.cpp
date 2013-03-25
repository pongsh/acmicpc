#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool sortByWeight(pair<int,int> i, pair<int,int> j) {
   /*
   if (i.second != j.second) { return i.second > j.second; }
   else { return i.first < j.first; }
   */
   return i.first < j.first;
}

int main() {
 
    int T;
    cin >> T;

    for (int t = 0; t != T; ++t) {
        int W;
        cin >> W;

        int N;
        cin >> N;

        vector<pair<int,int> > loot(N);

        for (int n = 0; n != N; ++n) {
            cin >> loot[n].first >> loot[n].second;
        }
        
        sort(loot.begin(), loot.end(), sortByWeight);

        int curWeight = 0, maxValue = 0;
        
        for (int n = 0; n != N; ++n) {
            if ((curWeight + loot[n].first) <= W) {
                curWeight += loot[n].first;
                maxValue += loot[n].second;
            }
        }

        cout << "Case #" << t+1 << ": " << maxValue << endl;

        /*
        for (int n = 0; n != N; ++n) {
            cout << "Weight: " << loot[n].first << " Value: " << loot[n].second << endl;
        }
        */

    }
    return 0;
}
