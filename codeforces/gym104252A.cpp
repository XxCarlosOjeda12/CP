#include <bits/stdc++.h>
using namespace std;

#define ll long long
 
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()

#define            pb                push_back
#define          sz(a)               (int)a.size()


void solve(){
    int N;
    cin >> N;

    vector<pair<int,int>> query(N+1);
    vector<vector<int>> grafo(N+1);
    for (int i = 1; i <= N; i++) {
        int x, y;
        cin >> x >> y;
        query[i] = {x, y};
        grafo[i].pb(x);
        grafo[i].pb(y);
    }

    string res(N, 'N');
    
    for (int p = 1; p <= N; ++p) {
        int a = query[p].first;
        int b = query[p].second;
        bool pierde = false;

        for (int s = 1; s <= N && !pierde; s++) {
            vector<char> vis(N+1, 0);
            queue<int> q;
            vis[s] = 1;
            q.push(s);

            while (!q.empty()) {
                int u = q.front(); q.pop();
                for (int v : grafo[u]) {
                    if (u == p) continue;
                    if (!vis[v]) {
                        vis[v] = 1;
                        q.push(v);
                    }
                }
            }

            if (vis[p] && vis[a] && vis[b]) {
                pierde = true;
            }
        }

        res[p-1] = (pierde ? 'Y' : 'N');
    }

    cout << res << "\n";

}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}