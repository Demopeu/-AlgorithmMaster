#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M, answer = 64;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> N >> M;

    vector<vector<char>> matrix(N, vector<char>(M));

    // 입력 받기
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    // 모든 가능한 8x8 시작 위치 검사
    for (int i = 0; i < N - 7; i++) {
        for (int j = 0; j < M - 7; j++) {
            int black = 0, white = 0;

            // 8x8 영역 검사
            for (int a = i; a < i + 8; a++) {
                for (int b = j; b < j + 8; b++) {
                    // (a+b)의 짝/홀 판정으로 색 위치 결정
                    if ((a + b) % 2 == 0) {
                        if (matrix[a][b] != 'B') black++;
                        else white++;
                    }
                    else {
                        if (matrix[a][b] != 'W') black++;
                        else white++;
                    }
                }
            }

            // 검정/흰색 시작점 중 최소 변경 횟수 찾기
            int minChanges = min(black, white);
            answer = min(answer, minChanges);  // 전체 최소값 업데이트
        }
    }

    // 결과 출력
    cout << answer << '\n';

    return 0;
}
