#include <iostream>
#include <string>
#include "Solution.hpp"

void display_output(std::vector<std::vector<int>> &test_vecs,
        std::vector<int> &test_vals) {

    Solution sol;
    for (auto i = 0; i < test_vecs.size(); ++i) {

        auto vec = test_vecs.at(i);
        auto val = test_vals.at(i);
        auto occurences = sol.count_occurences(vec, val);

        std::cout<< "Test " << i + 1 << std::endl;
        if (occurences >= 0) {

            std::cout << "Input vector:";
            std::for_each(vec.begin(), vec.end(),
                [](auto vec_value) { std::cout << ' ' << vec_value; });
            std::cout << std::endl;

            std::cout << "Number of occurences of " << val
                << " is " << occurences << std::endl << std::endl;
        }
        else {
            std::cout << "Empty input vector" << std::endl << std::endl;
        }
    }
}

void build_tests(std::vector<std::vector<int>> &test_vecs,
        std::vector<int> &test_vals) {

    test_vecs.push_back({1,2,3,3,4,5});
    test_vals.push_back(3);

    test_vecs.push_back({});
    test_vals.push_back(16);

    test_vecs.push_back({0});
    test_vals.push_back(0);

    test_vecs.push_back({1,1,1,1});
    test_vals.push_back(1);

    test_vecs.push_back({0,2,3,20});
    test_vals.push_back(20);

    test_vecs.push_back({1,3,7,20});
    test_vals.push_back(42);
}


int main(void) {

    std::vector<std::vector<int>> test_vecs;
    std::vector<int> test_vals;
    build_tests(test_vecs, test_vals);
    display_output(test_vecs, test_vals);

    return 0;
}
