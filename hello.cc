#include <iostream>
#include <vector>

std::vector<double> return_vec() {
    std::vector<double> a;
    a.push_back(1.0);
    return a;
}

int main() {
    const std::vector<double> nums = return_vec();
    std::cout << nums[0];
}
