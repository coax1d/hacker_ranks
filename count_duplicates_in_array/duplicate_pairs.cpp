/*
Author: Andrew Burger
O(n) solution to count duplicates in vector/array
*/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

inline int count_duplicates(vector<int> &nums) {

    map<int, bool> m;

    int count = 0;

    for (int i = 0; i < nums.size(); ++i) {

        if (m.find(nums.at(i)) != m.end()) { // is value in the hashmap
            count++;
        }
        else {
            m.insert({nums.at(i), true});
        }
    }

    return count;
}

int main()
{

    vector<int> vec1 = {1, 3, 4, 3, 1, 1, 2,}; // 3 duplicates
    vector<int> vec2 = {3,2,1,0}; // 0 duplicates
    vector<int> vec3 = {0}; // 0 duplicates
    vector<vector<int>> super_vec = {vec1, vec2, vec3};

    for (auto &vec : super_vec) {
        int duplicates = count_duplicates(vec);

        cout << "Duplicates for vec ";
        for (auto &i : vec) {
            cout << i << ' ';
        }
        cout << "is " << duplicates << endl;
    }

    return 0;
}
