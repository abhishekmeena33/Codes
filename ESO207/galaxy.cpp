#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

typedef pair<long long, long long> pii; 

class FordFulkerson {
private:
    vector<vector<pii>> graph;
    vector<bool> visited;
public:
    FordFulkerson(long long n) {
        graph.resize(n);
        visited.assign(n, false);
    }

    void addEdge(long long u, long long v, long long capacity) {
        graph[u].push_back({v, capacity});
    }

    long long maxFlow(long long source, long long sink) {
        long long maxFlow = 0;
        while (true) {
            long long pathFlow = dfs(source, sink, INT_MAX);
            if (pathFlow == 0) break;
            maxFlow += pathFlow;
            visited.assign(graph.size(), false);
        }
        return maxFlow;
    }

    long long dfs(long long u, long long sink, long long flow) {
        if (u == sink) return flow;
        visited[u] = true;
        for (auto& edge : graph[u]) {
            long long v = edge.first;
            long long capacity = edge.second;
            if (!visited[v] && capacity > 0) {
                long long pathFlow = dfs(v, sink, min(flow, capacity));
                if (pathFlow > 0) {
                    edge.second -= pathFlow;
                    for (auto& backEdge : graph[v]) {
                        if (backEdge.first == u) {
                            backEdge.second += pathFlow;
                            break;
                        }
                    }
                    return pathFlow;
                }
            }
        }
        return 0;
    }
};

int main() {
    long long N, M;
    cin >> N >> M;
    FordFulkerson ff(N);

    for (long long i = 0; i < M; ++i) {
        long long a, b, c;
        cin >> a >> b >> c;
        ff.addEdge(a - 1, b - 1, c); // Adjusting to 0-based indexing
    }

    cout << ff.maxFlow(0, N - 1) << endl;

    return 0;
}
