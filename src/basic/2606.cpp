#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int cnt = -1;
int vis[10000];
vector<int> v[101];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        cnt++;
        for (int i = 0; i < v[x].size(); i++)
        {
            int y = v[x][i];
            if (!vis[y])
            {
                q.push(y);
                vis[y] = true;
            }
        }
    }
}
int main()
{
    int i, a, b, c, n;

    cin >> c >> n;

    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    bfs(1);
    cout << cnt << endl;
}