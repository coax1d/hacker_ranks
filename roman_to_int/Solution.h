#include <map>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int romanToInt(string s)
    {
        vector<int> values;
        for (int i = 0; i < s.length(); i++)
        {
            values.push_back(romans.at(s[i]));
        }
       
        int result = 0;
        for (int i = 0; i < values.size(); i++)
        {
            if (i + 1 == values.size()) // Last element exit condition
            {
                result += values.at(i);
                break;
            }
            if (values.at(i) >= values.at(i+1))
            {
                result += values.at(i);
            }
            else
            {
                result -= values.at(i);
            }
        }
        return result;
    }
private:
    map<char, int> romans =
        {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
};

