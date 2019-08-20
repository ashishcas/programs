#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 5;

#define pii pair <int, int>

int n, q;
vector < pii > g[N];
int vis[N];
int lvl[N];
int par[N][22];
int maxCst[N][22];

void init() {
    for (int i = 0; i < N; i++) {
        vis[i] = 0;
        lvl[i] = 0;
        g[i].clear();
        for (int j = 0; j < 22; j++) {
            par[i][j] = -1;
            maxCst[i][j] = 0;
        }
    }
}

void dfs(int u) {
    if (u == 1) par[u][0] = u;
    for (int i = 1; i < 22; i++) {
        par[u][i] = par[par[u][i - 1]][i - 1];
        maxCst[u][i] = max(maxCst[u][i - 1], maxCst[par[u][i - 1]][i - 1]);
    }
    vis[u] = 1;
    for (auto it : g[u]) {
        int v = it.first;
        int c = it.second;
        if (!vis[v]) {
            lvl[v] = lvl[u] + 1;
            maxCst[v][0] = c;
            par[v][0] = u;
            dfs(v);
        }
    }
}

int lca(int u, int v) {
    if (lvl[u] < lvl[v]) swap(u, v);
    for (int i = 21; i >= 0; i--) {
        if (lvl[u] - (1 << 21) >= lvl[v]) {
            u = par[u][i];
        }
    }
    if (u == v) return u;
    for (int i = 21; i >= 0; i--) {
        if (par[u][i] != par[v][i]) {
            u = par[u][i];
            v = par[v][i];
        }
    }
    return par[u][0];
}

int findMaxCst(int u, int p) {
    int k = lvl[u] - lvl[p];
    int maxVal = 0;
    for (int i = 21; i >= 0; i--) {
        if (k - (1 << i) >= 0) {
            maxVal = max(maxVal, maxCst[u][i]);
            u = par[u][i];
            k -= (1 << i);
        }
    }
    return maxVal;
}

void solve() {
    cin >> n >> q;
    for (int i = 1; i < n; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        g[u].push_back({v, c});
        g[v].push_back({u, c});
    }
    dfs(1);
    for (int i = 1; i <= q; i++) {
        int x, u, v;
        cin >> x >> u >> v;
        int p = lca(u, v);
        int maxCstUV = max(findMaxCst(u, p), findMaxCst(v, p));
        if (maxCstUV > x) cout << "No\n";
        else cout << "Yes\n";
    }
}

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t = 1;
    // cin >> t;
    while (t--) {
        init();
        solve();
    }
    return 0;
}
