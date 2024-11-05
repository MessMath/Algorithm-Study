#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

struct Node {
    int left, right;
};

vector<Node> tree(10001);
int min_pos[10001], max_pos[10001]; // 각 레벨에서의 최소, 최대 위치
int level_depth[10001]; // 각 노드의 깊이 저장
int position = 1; // 현재 위치를 나타내는 변수

void inorder(int node, int depth) {
    if (node == -1) return; // 자식이 없는 경우

    // 왼쪽 서브트리 순회
    inorder(tree[node].left, depth + 1);

    // 현재 노드 처리
    level_depth[node] = depth;
    if (min_pos[depth] == 0) min_pos[depth] = position;
    max_pos[depth] = position;
    position++;

    // 오른쪽 서브트리 순회
    inorder(tree[node].right, depth + 1);
}

int main() {
    int n;
    cin >> n;

    vector<bool> is_root(n + 1, true);
    for (int i = 1; i <= n; i++) {
        int parent, left, right;
        cin >> parent >> left >> right;

        tree[parent].left = left;
        tree[parent].right = right;

        if (left != -1) is_root[left] = false;
        if (right != -1) is_root[right] = false;
    }

    // 루트 찾기
    int root = 1;
    for (int i = 1; i <= n; i++) {
        if (is_root[i]) {
            root = i;
            break;
        }
    }

    // 중위 순회를 이용하여 각 노드의 위치를 계산
    inorder(root, 1);

    // 각 레벨별로 너비 계산
    int max_width = 0;
    int max_level = 1;
    for (int i = 1; i <= n; i++) {
        if (min_pos[i] != 0) { // 해당 레벨에 노드가 존재하는 경우
            int width = max_pos[i] - min_pos[i] + 1;
            if (width > max_width) {
                max_width = width;
                max_level = i;
            }
        }
    }

    // 결과 출력
    cout << max_level << " " << max_width << '\n';
    return 0;
}
