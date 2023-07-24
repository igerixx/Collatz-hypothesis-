#include <iostream>

int main() {
    unsigned long long num, max = 0;
    int i = 0;
    std::cout << "Write any positive number: ";
    std::cin >> num;
    if (num < 1) return 0;
    while (num > 1) {
        num = !(num % 2) ? num / 2 : num * 3 + 1;
        max = max < num ? num : max;
        std::cout << ++i << ".\t" << num << std::endl;
    }
    std::cout << "\n" << i << " moves has been made" << std::endl;
    if (max > 0) std::cout << "Max number in there is " << max << std::endl;
}
