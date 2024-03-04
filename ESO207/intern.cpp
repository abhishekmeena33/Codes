#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main() {
 lli N, Q, FQ;
cin >> N;

vector<lli> nv(N + 1);
vector<vector<lli>> adjList(N + 1);

for (lli i = 1; i <= N; i++) {
 lli v;
cin >> v;
nv[i] = v;
adjList[v].push_back(i);
adjList[i].push_back(v);
}

cin >> Q;
queue<lli> que;
vector<lli> ans(N + 1, INT_MAX);
vector<lli> dists(N + 1, INT_MAX);
vector<lli> vis(N + 1, 0);
vector<lli> vis2(N + 1, 0);

for (lli i = 0; i < Q; i++) {
 lli val;
cin >> val;
que.push(val);
vis2[val] = 1;
dists[val] = 0;
ans[val] = val;
}

while (!que.empty()) {
 lli curNode = que.front();
que.pop();
 vis[curNode] = 1;

for (lli neigh : adjList[curNode]) {
if (!vis[neigh]) {
if (!vis2[neigh]) {
que.push(neigh);
vis2[neigh] = 1;
}

if (dists[curNode] + 1 < dists[neigh]) {
dists[neigh] = dists[curNode] + 1;
ans[neigh] = ans[curNode];
} else if (dists[curNode] + 1 == dists[neigh] && ans[curNode] < ans[neigh]) {
ans[neigh] = ans[curNode];
}
}
}
}

cin >> FQ;

for (lli i = 0; i < FQ; i++) {
 lli val;
cin >> val;
cout << ans[val] << endl;
}
return 0;
}
