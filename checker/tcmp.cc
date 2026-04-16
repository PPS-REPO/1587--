#include "testlib.h"
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
    // 1. 체커 초기화 (기본 인자 전달)
    registerTestlibCmd(argc, argv);

    // 2. 입력 파일(inf)에서 데이터 읽기
    // n과 m을 읽습니다.
    int n = inf.readInt();
    int m = inf.readInt();

    // n개의 정수 리스트를 읽습니다.
    vector<long long> l(n);
    for (int i = 0; i < n; i++) {
        l[i] = inf.readLong();
    }

    // 3. 정답 파일(ans)과 유저 출력 파일(ouf)에서 값 읽기
    // 정답 파일에서 예상 결과값을 읽습니다.
    long long jans = ans.readLong();
    
    // 유저 출력에서 결과값을 읽습니다. 
    // 만약 범위를 지정하고 싶다면 readLong(min, max, "name") 형식을 쓸 수 있습니다.
    long long pans = ouf.readLong();

    // 4. 비교 및 결과 판정
    if (jans != pans) {
        // 정답과 다를 경우: 기대값과 출력값을 보여주며 WA(Wrong Answer) 처리
        quitf(_wa, "expected %lld, found %lld", jans, pans);
    }

    // 모든 검사를 통과했을 경우 AC(Accepted) 처리
    quitf(_ok, "answer is correct");

    return 0;
}