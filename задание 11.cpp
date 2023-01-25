#include <iostream>
#include <vector>

int main() {
    std::vector<int> v(10);
    for (int i = 0; i < v.size(); i++) {
        v[i] = i * i;
    }
    for (int i : v) {
        std::cout << i << " ";
    }
    return 0;
}
