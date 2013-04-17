#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <queue>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t != T; ++t) {
        int V;
        cin >> V;

        map<int, vector<int> > graph;   
        
        // Stores all the connected flights in a map.
        for (int v = 0; v != V; ++v) {
            int numRoutes;
            cin >> numRoutes;

            for (int i = 0; i != numRoutes; ++i) {
                int route;
                cin >> route;
                graph[v+1].push_back(route);
            }
        }
     
        set<int> visited;
        queue<int> q;
        // Always start from city 1.
        q.push(1);

        int count = 0, node;

        // Implements a breadth first search. 
        // Can also use depth first search for this problem. Replace queue with stack.
        while (!q.empty()) {
            // Pop the last element from the queue.
            node = q.front();
            q.pop();
            
            // Insert city to visited set, if already visited we skip this city.
            if (!visited.count(node)) {
                visited.insert(node);
                count++;
            }
            else {
                continue;
            }

            // For every city check what connected flights there are.
            for (int i = 0; i != graph[node].size(); ++i) {
                q.push(graph[node][i]);
            }
        }

        cout << "Case " << t+1 << ": " << count << endl;
    }
    return 0;
}