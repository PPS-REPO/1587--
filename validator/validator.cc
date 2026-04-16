#include "testlib.h"
#include <set>

using namespace std;

int main(int argc, char* argv[]) {
    // 1. Validator 초기화
    registerValidation(argc, argv);

    // 2. n과 m 읽기 및 범위 검증
    // readInt(min, max, "변수명")
    int n = inf.readInt(1, 300000, "n");
    inf.readSpace(); // 공백 확인
    int m = inf.readInt(1, n, "m");
    inf.readEoln(); // 줄바꿈 확인

    // 3. n개의 난이도 데이터 검증
    set<int> levels; // 중복 확인을 위한 set
    for (int i = 0; i < n; i++) {
        // 1,000,000,000 이하의 자연수(1부터 시작)
        int difficulty = inf.readInt(1, 1000000000, "difficulty");
        
        // "어느 두 맵도 난이도가 같지 않다" 조건 검증
        ensuref(levels.find(difficulty) == levels.end(), 
                "Duplicate difficulty found at index %d: %d", i, difficulty);
        levels.insert(difficulty);

        // 마지막 요소가 아니면 공백, 마지막이면 줄바꿈 확인
        if (i < n - 1) {
            inf.readSpace();
        } else {
            inf.readEoln();
        }
    }

    // 4. 파일의 끝(EOF) 확인 (불필요한 데이터가 뒤에 더 있는지 체크)
    inf.readEof();

    return 0;
}