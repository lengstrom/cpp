#include <iostream>
#include <vector>

std::vector<double> return_vec() {
    std::vector<double> a;
    a.push_back(1.0);
    return a;
}

void a_func(const std::vector<double> a){
    return;
}

int main() {
    const std::vector<double> nums = return_vec();
    a_func(nums);
    std::cout << nums[0];
}
