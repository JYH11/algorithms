#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k,w;
        cin >> n>> k;
        int time[1002];
        for (int i = 1; i <= n; i++) 
            cin >> time[i];
        vector<int> adj[1002];
        int inDeg[1002] = { 0, };
        queue<int> q;
        int result[1002];

        while (k--) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            inDeg[y]++;
        }
        cin >> w;

        for (int i = 1; i <= n; i++) {
            if (inDeg[i] == 0) 
                q.push(i);
            result[i] = time[i];
        }
        while (!q.empty()) {
            int cur = q.front(); q.pop();
            for (int i = 0; i < adj[cur].size(); i++) {
                int next = adj[cur][i];
                inDeg[next]--;
                result[next] = max(result[next], result[cur] + time[next]);
                if (inDeg[next] == 0)
                    q.push(next);
            }
        }
        cout << result[w] << '\n';
    }
}
