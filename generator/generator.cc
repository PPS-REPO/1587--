#include "testlib.h"

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <random>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> dist_n(1, 300000);
    int n = dist_n(gen);

    uniform_int_distribution<int> dist_m(1, n);
    int m = dist_m(gen);

    cout << n << " " << m << "\n";

    
    uniform_int_distribution<int> dist_val(1, 1000000000);
    vector<int> l;
    l.reserve(n);
    for(int i = 0; i < n; ++i) {
        l.push_back(dist_val(gen));
    }

    // 3. 결과 출력
    for (int i = 0; i < n; ++i) {
        cout << l[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}