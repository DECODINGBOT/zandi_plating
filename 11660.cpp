#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);  // 입출력 속도 향상
    cin.tie(NULL);                // cin과 cout의 동기화 해제

    int n, m;
    cin >> n >> m;

    // 2차원 배열과 누적 합 배열 생성
    int arr[1025][1025] = {0};
    int prefix_sum[1025][1025] = {0};

    // 표 입력 및 누적 합 배열 생성
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
            prefix_sum[i][j] = arr[i][j] 
                             + prefix_sum[i - 1][j] 
                             + prefix_sum[i][j - 1] 
                             - prefix_sum[i - 1][j - 1];
        }
    }

    // M개의 쿼리 처리
    while (m--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        // 구간 합 계산
        int sum = prefix_sum[x2][y2] 
                - prefix_sum[x1 - 1][y2] 
                - prefix_sum[x2][y1 - 1] 
                + prefix_sum[x1 - 1][y1 - 1];
        cout << sum << '\n';  // 개행 처리로 속도 향상
    }

    return 0;
}