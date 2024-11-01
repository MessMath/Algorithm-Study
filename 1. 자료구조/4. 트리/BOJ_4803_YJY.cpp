#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[501];
bool visited[501];
bool is_tree;

void DFS(int cur, int parent)
{
    visited[cur] = true;

    for(int nxt : graph[cur]) {
        if(!visited[nxt]) {
            DFS(nxt, cur);
        } else if(nxt != parent) {
            is_tree = false;
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    int s, e;
    int tc = 1;
    
    while(cin >> n >> m) {
        if(n == 0 && m == 0) break;

        for(int i = 1; i <= n; i++) {
            graph[i].clear();
        }
        fill_n(visited, sizeof(visited), false);

        for(int i = 0; i < m; i++) {
            cin >> s >> e;
            graph[s].push_back(e);
            graph[e].push_back(s);
        }
        
        int tree_cnt = 0;
        for(int i = 1; i <= n; i++) {
            if(!visited[i]) {
                is_tree = true;
                DFS(i, -1);
                if(is_tree) tree_cnt++;
            }
        }

        cout << "Case " << tc++ << ": ";
        if(tree_cnt == 0) {
            cout << "No trees.\n";
        } else if(tree_cnt == 1) {
            cout << "There is one tree.\n";
        } else {
            cout << "A forest of " << tree_cnt << " trees.\n";
        }
    }
    return 0;
}