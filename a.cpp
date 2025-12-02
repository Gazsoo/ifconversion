
#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>
#include <numeric>
#include <array>
#include <print>
#include <string>
#include <random>

std::mt19937 rng(0);
std::uniform_int_distribution<unsigned> dist(0, 255);

std::pair<unsigned int, unsigned int> foo() {
    unsigned int summ = 0;
    unsigned int summall = 0;

    unsigned int state = 123456789;
    for (unsigned int i = 0; i < 10'000'000; i++) {
        state = state * 1664525 + 1013904223;
        summall += i;
        //std::cout << val << std::endl;
        if (((state >> 24) % 255) < 128)
            summ += i;
    }
    return { summall, summ };
}

//std::vector<unsigned int> make_unpredictable_vector(std::size_t N = 5'000'000) {
//
//    std::random_device rd;        
//    std::mt19937 rng(rd());
//    std::uniform_int_distribution<unsigned> dist(0, 255);
//    std::vector<unsigned> v;
//
//    v.reserve(N);
//    for (size_t i = 0; i < N; ++i)
//        v.push_back(dist(rng));
//    return v;
//}
//std::vector<unsigned int> make_predictable_vector(std::size_t N = 10'000'000) {
//
//    std::vector<unsigned> v;
//    v.reserve(N);
//    for (size_t i = 0; i < N; ++i)
//        v.push_back(i);
//    return v;
//}
int main() {

    //std::vector<unsigned int> randomNumbers = {
    //    42, 189, 12, 255, 76, 201, 33, 9, 150, 244,
    //    118, 5, 230, 99, 17, 68, 142, 211, 88, 3,
    //    167, 134, 25, 256, 105, 19, 222, 60, 184, 91,
    //    123, 7, 199, 45, 210, 156, 82, 13, 178, 240,
    //    36, 114, 208, 55, 165, 29, 95, 227, 73, 101, 6, 88, 174
    //    };

    //auto nums = std::views::iota(0) | std::views::take(256);


    // Construct vector using the range's iterators

    //std::vector<unsigned int> vec(nums.begin(), nums.end());

    //auto nums = std::views::iota(0) | std::views::take(255) | std::ranges::to<std::vector>();

    //std::vector<unsigned int> vec = std::vector<unsigned int>();

    //std::cbegin(nums), std::ranges::cend(nums)

    auto b = foo();

    std::cout << b.first << " " << b.second << std::endl;

}