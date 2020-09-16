#include <map>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) 
    {
        if (s.empty()) return true;

        for (int i = 0; i < s.length(); i++)
        {
            if (map.find(s[i]) != map.end())
            {
                char stack_var = '#';
                if (!stack.empty())
                {
                    stack_var = stack.top();
                    stack.pop();
                }
                
                if (stack_var != map.at(s[i]))
                {
                    return false;
                }
            }
            else
            {
                stack.push(s[i]);
            }
        }
        return stack.empty();
    }
    
private:
    map<char, char> map =
    {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };
    stack<char> stack;
};
