#include <iostream>
#include <vector>
#include <queue>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> l(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> l[i];
    }

    std::priority_queue<int, std::vector<int>, std::greater<int>> h;
    int nlw = 0;

    for (int i : l) {
        if ((int)h.size() < m) {
            h.push(i);
        } else {
            h.push(i);
            if (h.top() == i) {
                ++nlw;
            }
            h.pop();
        }
    }

    std::cout << nlw+1 << std::endl;
    return 0;
}