#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    queue<int> q;
    vector<int> result;

    // 1부터 N까지 큐에 추가
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    // 요세푸스 순열 생성
    while (!q.empty()) {
        for (int i = 1; i < K; i++) {
            // K-1번째까지는 맨 뒤로 보냄
            q.push(q.front());
            q.pop();
        }
        // K번째 사람 제거 및 결과에 추가
        result.push_back(q.front());
        q.pop();
    }

    // 결과 출력
    cout << "<";
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) cout << ", ";
    }
    cout << ">" << endl;

    return 0;
}