/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        int len = s.length();
        bool result = false;
        if(len == 0)
            return true;
        vector<char> vector_a;
        for(int i = 0;i < len;i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                vector_a.push_back(s[i]);
            else{
                if(vector_a.size() == 0)
                    return false;
                char right = vector_a.back();
                vector_a.pop_back();
                switch (right)
                {
                case '(':
                    if(s[i] != ')')
                        return false;
                    break;
                case '[':
                    if(s[i] != ']')
                        return false;
                    break;
                case '{':
                    if(s[i] != '}')
                        return false;
                    break;
                default:
                    break;
                }
            }
        }
        int size = vector_a.size();
        if(size == 0)
            return true;
        return result;
    }
};
// @lc code=end

